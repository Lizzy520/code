<template>
    <div>
        <School></School>
        <Student></Student>
    </div>
</template>

<script>
    // 引入组件 脚手架中可以不写 .vue 后缀
    import School from "./School"
    import Student from "./Student"
    export default {
        name: "App",
        components: {
            School,
            Student
        }
    }
</script>

<style>

</style>