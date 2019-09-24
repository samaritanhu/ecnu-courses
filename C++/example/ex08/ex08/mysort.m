% 各种排序算法
clear all;
n = 10;
x = randi(100,n,1); % 待排序的数列

% 
% % n=100000;
% % fid=fopen('data100000.dat','rb');
% % x=fread(fid,[n,1],'int32');
% % fclose(fid);
% 
% Matlab 自带的排序函数
xt = sort(x); 
% fid=fopen('data100000sorted.dat','wb');
% fwrite(fid,xt,'int32');
% fclose(fid);
% 
% % return
% 
% % 最小排序
% t0 = clock;
% y = Sort_Min(x,n);
% t = etime(clock,t0);
% fprintf('最小排序: time=%.4e, error=%.f\n',t,norm(double(y-xt)));
% 
% % 插入排序
% t0 = clock;
% y = Sort_Insert(x,n);
% t = etime(clock,t0);
% fprintf('插入排序: time=%.4e, error=%.f\n',t,norm(double(y-xt)));
% 
% % 希尔（shell）排序
% t0 = clock;
% y = Sort_Shell(x,n);
% t = etime(clock,t0);
% fprintf('希尔排序: time=%.4e, error=%.f\n',t,norm(double(y-xt)));
% 
% % 冒泡排序
% t0 = clock;
% y = Sort_Bubble(x, n);
% t = etime(clock,t0);
% fprintf('冒泡排序: time=%.4e, error=%.f\n',t,norm(double(y-xt)));

% 快速排序
warning('off');
global xx;
xx = x;
t0 = clock;
Sort_Quick(1,n);
t = etime(clock,t0);
fprintf('快速排序: time=%.4e, error=%.f\n',t,norm(double(xx-xt)));

        
