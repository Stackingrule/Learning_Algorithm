export default (str) => {
    //字符串按空格进行分割，保存数组
    let arr = str.split(' ')
    //对数组进行遍历。每个元素进行反转
    let result = arr.map(item => {
        return item.split('').reverse().join('')
    })
    return result.join(' ')
}