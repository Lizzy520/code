<template>
<!-- 组件的结构 -->
  <div class="demo">
    <h2>学校名称：{{name}}</h2>
    <h2>学校地址：{{address}}</h2>
    <button @click="showName">点我提示学校名称</button>
  </div>
</template>

<script>
  // 组件交互相关的代码（数据、方法等）
  
  // 对外暴露：分别暴露、统一暴露、默认暴露（常用）
  // 这里不单独定义const school = Vue.extend(options)，直接把 Vue.extend(options) 的配置对象暴露出去，并且通过name配置项为组件起一个名字
  export default {
    name: "School",//最好与文件名保持一致
    data(){
      return {
        name: "神乐学园",
        address: "魔法城堡"
      }
    },
    methods: {
      showName(){
        alert("欢迎来到",this.name,"!");
      }
    }
  }
</script>

<style>
  /* 组件样式 */
  .demo {
    background-color:pink;
  }
</style>

