function sort_quick(left,right)
global x

if left < right
    mid = partition(left, right);
    sort_quick(left, mid-1);
    sort_quick(mid+1, right);
end

function left = partition(left, right)
global x
% ��һ��������Χ��������ѡ��һ���м�Ԫ��, ���ָ�Ԫ��
% ִ���꺯��֮�󷵻طָ�Ԫ�����ڵ�λ��
% �ڷָ�Ԫ��֮ǰ��Ԫ�ض�С������м�Ԫ��,
% ���������Ԫ�ض����ڵ�������м�Ԫ��

pivot = x(left); % ���������еĵ�һ��Ԫ��Ϊ�м�Ԫ��
while (left < right)
    % �Ӻ���ǰ, �ں�벿����Ѱ�ҵ�һ��С���м�Ԫ�ص�Ԫ��
    while left<right && x(right) >= pivot
        right = right - 1;
    end
    % ��������м�Ԫ��С��Ԫ���Ƶ�ǰ�벿��
    if (left < right)
        x(left) = x(right); left = left + 1;
    end
    
    % ��ǰ������ǰ�벿����Ѱ�ҵ�һ�������м�Ԫ�ص�Ԫ��
    while left<right && x(left) < pivot
        left = left + 1;
    end
    % ��������м�Ԫ�ش��Ԫ���Ƶ���벿��
    if (left < right)
        x(right) = x(left); right = right - 1;
    end
end
x(left) = pivot;
