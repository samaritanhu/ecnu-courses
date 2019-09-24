function sort_quick(left,right)
global x

if left < right
    mid = partition(left, right);
    sort_quick(left, mid-1);
    sort_quick(mid+1, right);
end

function left = partition(left, right)
global x
% 对一个给定范围的子序列选定一个中间元素, 即分割元素
% 执行完函数之后返回分割元素所在的位置
% 在分割元素之前的元素都小于这个中间元素,
% 在它后面的元素都大于等于这个中间元素

pivot = x(left); % 采用子序列的第一个元素为中间元素
while (left < right)
    % 从后往前, 在后半部分中寻找第一个小于中间元素的元素
    while left<right && x(right) >= pivot
        right = right - 1;
    end
    % 将这个比中间元素小的元素移到前半部分
    if (left < right)
        x(left) = x(right); left = left + 1;
    end
    
    % 从前往后在前半部分中寻找第一个大于中间元素的元素
    while left<right && x(left) < pivot
        left = left + 1;
    end
    % 将这个比中间元素大的元素移到后半部分
    if (left < right)
        x(right) = x(left); right = right - 1;
    end
end
x(left) = pivot;
