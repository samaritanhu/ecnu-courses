% 插入排序
function sort_insert(n)
close all;
if nargin<1, n=10; end

rng(2015);

if strcmp(pause(),'on')
    % n = 10;
    x = randi(100,n,1); % 待排序的数列
    bar(x); shg; 
    if n<20, pause, else pause(0.1), end
    y = Sort_Insert(x,n);
    subplot(2,1,1), bar(x); title('排序前','fontsize',20);
    subplot(2,1,2), bar(y); title('排序后','fontsize',20); shg;
else
    n = 10000;
    x = randi(2*n,n,1); % 待排序的数列
    xt = sort(x);
    t0 = clock;
    y = Sort_Insert(x,n);
    t = etime(clock,t0);
    fprintf('插入排序: time=%.4e, error=%.f\n',t,norm(double(y-xt)));
end

function x = Sort_Insert(x,n)
for k = 1 : n-1
    key = x(k+1); % 需要插入的元素
    i = k;
    while ( i > 0 && x(i) > key)
        x(i+1) = x(i); % 将前面 k 个元素中大于 x(k+1) 的数据向后移动
        i = i - 1;
    end
    x(i+1) = key; % 将当前元素插入合适的位置
    
    if strcmp(pause(),'on')
        tit = ['k=',int2str(k)];
        bar(x); title(tit,'fontsize',20); shg; 
        if n<20, pause, else pause(0.1), end
    end
end