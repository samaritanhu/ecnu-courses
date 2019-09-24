% ��������
function sort_insert(n)
close all;
if nargin<1, n=10; end

rng(2015);

if strcmp(pause(),'on')
    % n = 10;
    x = randi(100,n,1); % �����������
    bar(x); shg; 
    if n<20, pause, else pause(0.1), end
    y = Sort_Insert(x,n);
    subplot(2,1,1), bar(x); title('����ǰ','fontsize',20);
    subplot(2,1,2), bar(y); title('�����','fontsize',20); shg;
else
    n = 10000;
    x = randi(2*n,n,1); % �����������
    xt = sort(x);
    t0 = clock;
    y = Sort_Insert(x,n);
    t = etime(clock,t0);
    fprintf('��������: time=%.4e, error=%.f\n',t,norm(double(y-xt)));
end

function x = Sort_Insert(x,n)
for k = 1 : n-1
    key = x(k+1); % ��Ҫ�����Ԫ��
    i = k;
    while ( i > 0 && x(i) > key)
        x(i+1) = x(i); % ��ǰ�� k ��Ԫ���д��� x(k+1) ����������ƶ�
        i = i - 1;
    end
    x(i+1) = key; % ����ǰԪ�ز�����ʵ�λ��
    
    if strcmp(pause(),'on')
        tit = ['k=',int2str(k)];
        bar(x); title(tit,'fontsize',20); shg; 
        if n<20, pause, else pause(0.1), end
    end
end