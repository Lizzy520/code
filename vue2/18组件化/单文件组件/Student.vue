<template>
<!-- 组件的结构 -->
  <div class="demo">
    <h2>学生名字：{{name}}</h2>
    <h2>学生年龄：{{age}}</h2>
    <button @click="showName">点我提示学生名字</button>
  </div>
</template>

<script>
  // 组件交互相关的代码（数据、方法等）
  
  // 对外暴露：分别暴露、统一暴露、默认暴露（常用）
  // 这里不单独定义const school = Vue.extend(options)，直接把 Vue.extend(options) 的配置对象暴露出去，并且通过name配置项为组件起一个名字
  export default {
    name: "Student",//最好与文件名保持一致
    data(){
      return {
        name: "Lizzy",
        age: 18
      }
    },
    methods: {
      showName(){
        alert("欢迎",this.name);
      }
    }
  }
</script>

<style>
  /* 组件样式 */
  .demo {
    background-color:skyblue;
  }
</style>

