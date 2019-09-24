% ��С����
function sort_min(n)
close all;
if nargin<1, n=10; end

rng(2015);

if strcmp(pause(),'on')
    % n = 10;
    x = randi(100,n,1); % �����������
    bar(x); shg; 
    if n<20, pause, else pause(0.1), end
    y = Sort_Min(x,n);
    subplot(2,1,1), bar(x); title('����ǰ','fontsize',20);
    subplot(2,1,2), bar(y); title('�����','fontsize',20); shg;
else
    n = 10000;
    x = randi(2*n,n,1); % �����������
    xt = sort(x);
    t0 = clock;
    y = Sort_Min(x,n);
    t = etime(clock,t0);
    fprintf('��С����: time=%.4e, error=%.f\n',t,norm(double(y-xt)));
end

function x = Sort_Min(x,n)
for k = 1 : n-1
    [xmin, ind] = min(x(k:n)); % �ҳ�δ���򲿷ֵ���Сֵ��������λ��
    t = x(k); x(k) = x(k+ind-1); x(k+ind-1) = t; % ����
    
    if strcmp(pause(),'on')
        tit = ['k=',int2str(k)];
        bar(x); title(tit,'fontsize',20); shg;
        if n<20, pause, else pause(0.1), end
    end
end
