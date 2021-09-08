const HelloVueApp = {
    data() {
      return {
        message: 'Hello Vue!!'
      }
    }
  }
  
  Vue.createApp(HelloVueApp).mount('#hello-vue');

function fun(){
    let x = document.getElementById("hello-vue");
    x.innerHTML = "hello";
}