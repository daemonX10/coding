// Purpose: change the background color of the page to a random color when the button is clicked
        const btn = document.getElementById("button");
        const randomColor = () => {
            let val = "0123456789ABCDEF";
            let color = "#";

            for (let i = 0; i < 6; i++) {
                color += val[Math.floor(Math.random() * 16)];
            }
            return color;
        };

        console.log(randomColor());

        function changeRandomColor() {
            document.body.style.backgroundColor = randomColor();
        };

        btn.addEventListener("click", changeRandomColor);

    