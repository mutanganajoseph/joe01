
        function toggleIcon() {
            var icon = document.getElementById("icon");
            var menuToggle = document.querySelector(".bars i");

            if (icon.style.display === "block") {
                icon.style.display = "none";
                menuToggle.classList.remove("fa-times");
                menuToggle.classList.add("fa-bars");
            } else {
                icon.style.display = "block";
                menuToggle.classList.remove("fa-bars");
                menuToggle.classList.add("fa-times");
            }
        }