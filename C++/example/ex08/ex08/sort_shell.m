% 希尔（shell）排序
function sort_shell(n)
close all;
if nargin<1, n=10; end

rng(2015);

if strcmp(pause(),'on')
    % n = 10; 
    x = randi(100,n,1); % 待排序的数列
    bar(x); shg; 
    if n<20, pause, else pause(0.1), end
    y = Sort_Shell(x,n);
    subplot(2,1,1), bar(x); title('排序前','fontsize',20);
    subplot(2,1,2), bar(y); title('排序后','fontsize',20); shg;
else
    n = 10000; 
    x = randi(2*n,n,1); % 待排序的数列
    xt = sort(x);
    t0 = clock;
    y = Sort_Shell(x,n);
    t = etime(clock,t0);
    fprintf('希尔排序: time=%.4e, error=%.f\n',t,norm(double(y-xt)));
end

function x = Sort_Shell(x,n)
gap = floor(n/2); % 增量从数组长度的一半开始，每次减小一倍
while gap > 0
    for k = gap + 1 : n
        key = x(k); % 需要插入的元素
        i = k-gap;  % 对一组增量为step的元素进行插入排序
        while ( i > 0 && x(i) > key)
            x(i+gap) = x(i);
            i = i - gap;
        end
        x(i+gap) = key; % 将当前元素插入合适的位置
    end
    
    if strcmp(pause(),'on')
        tit = ['gap=',int2str(gap)];
        bar(x); title(tit,'fontsize',20); shg; 
        if n<20, pause, else pause(0.1), end
    end
    
    gap = floor(gap/2);
end