% ��������
clear all;
global x;

rng(2015);
n = 10000;
x = randi(2*n,n,1); % �����������
% bar(x); title('����ǰ','fontsize',20); shg; pause;
xt = sort(x);

t0 = clock;
sort_quick(1,n);
t = etime(clock,t0);
% bar(x); title('�����','fontsize',20); shg; 
fprintf('��������: time=%.4e, error=%.f\n',t,norm(double(x-xt)));
