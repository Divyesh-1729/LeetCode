/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let val = init;
    let i=0;
    if(nums.length==0)
    {
        return val;
    }
    else
    {
        for(var a=0;a<nums.length;a++)
        {
            val =fn(val,nums[i]);
            i++;
        }
    }
    return val;
};