% ���������㷨
clear all;
n = 10;
x = randi(100,n,1); % �����������

% 
% % n=100000;
% % fid=fopen('data100000.dat','rb');
% % x=fread(fid,[n,1],'int32');
% % fclose(fid);
% 
% Matlab �Դ���������
xt = sort(x); 
% fid=fopen('data100000sorted.dat','wb');
% fwrite(fid,xt,'int32');
% fclose(fid);
% 
% % return
% 
% % ��С����
% t0 = clock;
% y = Sort_Min(x,n);
% t = etime(clock,t0);
% fprintf('��С����: time=%.4e, error=%.f\n',t,norm(double(y-xt)));
% 
% % ��������
% t0 = clock;
% y = Sort_Insert(x,n);
% t = etime(clock,t0);
% fprintf('��������: time=%.4e, error=%.f\n',t,norm(double(y-xt)));
% 
% % ϣ����shell������
% t0 = clock;
% y = Sort_Shell(x,n);
% t = etime(clock,t0);
% fprintf('ϣ������: time=%.4e, error=%.f\n',t,norm(double(y-xt)));
% 
% % ð������
% t0 = clock;
% y = Sort_Bubble(x, n);
% t = etime(clock,t0);
% fprintf('ð������: time=%.4e, error=%.f\n',t,norm(double(y-xt)));

% ��������
warning('off');
global xx;
xx = x;
t0 = clock;
Sort_Quick(1,n);
t = etime(clock,t0);
fprintf('��������: time=%.4e, error=%.f\n',t,norm(double(xx-xt)));

        
