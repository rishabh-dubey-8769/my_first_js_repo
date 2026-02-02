//Method-1 of doing promises: directly using promises i.e. using resolve and reject.

// let p=new Promise((resolve,reject)=>{
//     let a=1+2;
//     if(a>=4){resolve(`succeded, value= ${a} >4 `)}
//     else{reject(`Failed, value= ${a} <4`)}
// })

// p.then((message)=>{
//     console.log(`In then, you ${message}`)
// })
// .catch((message)=>{
//     console.log(`In catch, you ${message}`)
// })
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//Method-2 of doing promises: using functions,without using promises.

// const userLeft=false
// const watchingMeme=false
// function activitiesDoing(callback,errorcallback){
//     if(userLeft){
//         errorcallback({
//             name:'user Left',
//             message:'went offline'
//         })
//     }
//     else if(watchingMeme){
//         errorcallback({
//             name:'Watching memes',
//             message:'Oh! Online'
//         })
//     }
//     else{
//         callback({
//             name:'Doing Nothing',
//             message:'Like, share and subscribe.'
//         })
//     }
// }

// activitiesDoing(
//     (info1)=>{console.log(`${info1.name} -> ${info1.message}`)},  // acts like '.then' i.e. no error occured
//     (info2)=>{console.log(`${info2.name} -> ${info2.message}`)}  // acts like '.catch' i.e. error occured
// )
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//Method-3 of doing promises: using functions of return type, but storing into variable.

// const userLeft=false
// const watchingMeme=false
// let p=function activitiesDoing(){
//     return new Promise((can_resolve,can_reject)=>{
//         if(userLeft){
//             can_reject({
//                 name:'user Left',
//                 message:'went offline'
//             })
//         }
//         else if(watchingMeme){
//             can_reject({
//                 name:'Watching memes',
//                 message:'Oh! Online'
//             })
//         }
//         else{
//             can_resolve({
//                 name:'Doing Nothing',
//                 message:'Like, share and subscribe.'
//             })
//         }
//     })
// }

// p().then((info1)=>{
//     console.log(`${info1.name} -> ${info1.message}`)
// })
// .catch((info2)=>{
//     console.log(`${info2.name} -> ${info2.message}`)
// })
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

const p1 = new Promise((resolve, reject) => {
    resolve('Video 1 Recorded')
})
const p2 = new Promise((resolve, reject) => {
    resolve('Video 2 Recorded')
})
const p3 = new Promise((resolve, reject) => {
    resolve('Video 3 Recorded')
})

console.log("all Promises: ")
Promise.all([
    p1,p2,p3
]).then((my_messages) => {
    console.log(my_messages)
})

Promise.race([                             // race between promises
    p1,p2,p3
]).then((my_message) => {
    console.log("faster promise first: ")
    console.log(my_message)
})
