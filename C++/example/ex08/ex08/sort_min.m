% 最小排序
function sort_min(n)
close all;
if nargin<1, n=10; end

rng(2015);

if strcmp(pause(),'on')
    % n = 10;
    x = randi(100,n,1); % 待排序的数列
    bar(x); shg; 
    if n<20, pause, else pause(0.1), end
    y = Sort_Min(x,n);
    subplot(2,1,1), bar(x); title('排序前','fontsize',20);
    subplot(2,1,2), bar(y); title('排序后','fontsize',20); shg;
else
    n = 10000;
    x = randi(2*n,n,1); % 待排序的数列
    xt = sort(x);
    t0 = clock;
    y = Sort_Min(x,n);
    t = etime(clock,t0);
    fprintf('最小排序: time=%.4e, error=%.f\n',t,norm(double(y-xt)));
end

function x = Sort_Min(x,n)
for k = 1 : n-1
    [xmin, ind] = min(x(k:n)); % 找出未排序部分的最小值及其所在位置
    t = x(k); x(k) = x(k+ind-1); x(k+ind-1) = t; % 交换
    
    if strcmp(pause(),'on')
        tit = ['k=',int2str(k)];
        bar(x); title(tit,'fontsize',20); shg;
        if n<20, pause, else pause(0.1), end
    end
end
