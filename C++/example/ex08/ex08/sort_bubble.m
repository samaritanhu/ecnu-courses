% ð������
function sort_bubble(n)
close all;
if nargin<1, n=10; end

rng(2015);

if strcmp(pause(),'on')
    % n = 10;
    x = randi(100,n,1); % �����������
    bar(x); shg; 
    if n<20, pause, else pause(0.1), end
    y = Sort_Bubble(x,n);
else
    n = 10000;
    x = randi(2*n,n,1); % �����������
    xt = sort(x);
    t0 = clock;
    y = Sort_Bubble(x,n);
    t = etime(clock,t0);
    fprintf('ð������: time=%.4e, error=%.f\n',t,norm(double(y-xt)));
end

function x = Sort_Bubble(x,n)
for k = 1 : n
    flag = 0; % ���ڼ�¼�Ƿ�����Ҫ������Ԫ��
    for i = 1 : n-k
        if x(i) > x(i+1)
            flag = 1;
            t = x(i); x(i) = x(i+1); x(i+1) = t;
        end
    end
    if flag==0  % �����α���û��Ԫ����Ҫ����,��ô�������
        break;
    end
    
    if strcmp(pause(),'on')
        tit = ['k=',int2str(k)];
        bar(x); title(tit,'fontsize',20); shg; 
        if n<20, pause, else pause(0.1), end
    end
end