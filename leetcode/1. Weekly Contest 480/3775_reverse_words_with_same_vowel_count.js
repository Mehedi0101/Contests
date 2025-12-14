/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function (s) {
    const words = s.split(" ");
    let ans = "";
    let firstVowel = 0;
    for (let i = 0; i < words[0].length; i++) {
        if (
            words[0][i] === "a" ||
            words[0][i] === "e" ||
            words[0][i] === "i" ||
            words[0][i] === "o" ||
            words[0][i] === "u"
        )
            firstVowel++;
    }

    ans += words[0];

    for (let i = 1; i < words.length; i++) {
        ans += " ";

        let vc = 0;
        for (let j = 0; j < words[i].length; j++) {
            if (
                words[i][j] === "a" ||
                words[i][j] === "e" ||
                words[i][j] === "i" ||
                words[i][j] === "o" ||
                words[i][j] === "u"
            )
                vc++;
        }

        if (vc === firstVowel) {
            for (let j = words[i].length-1; j >= 0; j--) {
                ans += words[i][j];
            }
        }
        else{
            ans += words[i];
        }
    }

    return ans;
};
