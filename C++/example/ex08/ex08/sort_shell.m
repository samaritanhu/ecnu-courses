% ϣ����shell������
function sort_shell(n)
close all;
if nargin<1, n=10; end

rng(2015);

if strcmp(pause(),'on')
    % n = 10; 
    x = randi(100,n,1); % �����������
    bar(x); shg; 
    if n<20, pause, else pause(0.1), end
    y = Sort_Shell(x,n);
    subplot(2,1,1), bar(x); title('����ǰ','fontsize',20);
    subplot(2,1,2), bar(y); title('�����','fontsize',20); shg;
else
    n = 10000; 
    x = randi(2*n,n,1); % �����������
    xt = sort(x);
    t0 = clock;
    y = Sort_Shell(x,n);
    t = etime(clock,t0);
    fprintf('ϣ������: time=%.4e, error=%.f\n',t,norm(double(y-xt)));
end

function x = Sort_Shell(x,n)
gap = floor(n/2); % ���������鳤�ȵ�һ�뿪ʼ��ÿ�μ�Сһ��
while gap > 0
    for k = gap + 1 : n
        key = x(k); % ��Ҫ�����Ԫ��
        i = k-gap;  % ��һ������Ϊstep��Ԫ�ؽ��в�������
        while ( i > 0 && x(i) > key)
            x(i+gap) = x(i);
            i = i - gap;
        end
        x(i+gap) = key; % ����ǰԪ�ز�����ʵ�λ��
    end
    
    if strcmp(pause(),'on')
        tit = ['gap=',int2str(gap)];
        bar(x); title(tit,'fontsize',20); shg; 
        if n<20, pause, else pause(0.1), end
    end
    
    gap = floor(gap/2);
end