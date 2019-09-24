% 快速排序
clear all;
global x;

rng(2015);
n = 10000;
x = randi(2*n,n,1); % 待排序的数列
% bar(x); title('排序前','fontsize',20); shg; pause;
xt = sort(x);

t0 = clock;
sort_quick(1,n);
t = etime(clock,t0);
% bar(x); title('排序后','fontsize',20); shg; 
fprintf('快速排序: time=%.4e, error=%.f\n',t,norm(double(x-xt)));
