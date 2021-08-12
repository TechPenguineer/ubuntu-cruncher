# Ubuntu Cruncher

## How to use
<br>

### **Parse Integer**
<br>

```bash
cruncher 13
```
`Result:`
<br>
**> 13**<br>
**> 31**

### **Parse String**
<br>

```bash
cruncher Hey
```
`Result:`
<br>
**> Hey**<br>
**> eyH**<br>
**> yHe**<br>

## How it works

The program is very simple. It just takes the word and gets the number of characters in the word. It then loops deppending on the amount of character. Each time it runs through it takes the `0` index and puts it in the last. So the word "Hey" would turn into "eyH" and will continue to do that untill index `0` is back at index `0`
