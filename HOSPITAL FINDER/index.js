document.addEventListener("DOMContentLoaded", function () {
    const searchBtn = document.querySelector(".search button");
    const locationSelect = document.querySelector(".search select");
  
    searchBtn.addEventListener("click", function () {
      const location = locationSelect.value;
  
      if (location === "Select Location") {
        alert("Please select a location");
        return;
      }
  
      // convert to lowercase and redirect
      window.location.href = `hospitals/${location.toLowerCase()}.html`;
    });
  });