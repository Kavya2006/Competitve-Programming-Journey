<h2><a href="https://codeforces.com/contest/1974/problem/A" target="_blank" rel="noopener noreferrer">1974A — Phone Desktop</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1974A](https://codeforces.com/contest/1974/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Phone Desktop</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Little Rosie has a phone with a desktop (or launcher, as it is also called). The desktop can consist of several screens. Each screen is represented as a grid of size $$$5 \times 3$$$, i.e., five rows and three columns.</p><p>There are $$$x$$$ applications with an icon size of $$$1 \times 1$$$ cells; such an icon occupies only one cell of the screen. There are also $$$y$$$ applications with an icon size of $$$2 \times 2$$$ cells; such an icon occupies a <span class="tex-font-style-bf">square</span> of $$$4$$$ cells on the screen. Each cell of each screen can be occupied by no more than one icon.</p><p>Rosie wants to place the application icons on the minimum number of screens. Help her find the minimum number of screens needed.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases. </p><p>The first and only line of each test case contains two integers $$$x$$$ and $$$y$$$ ($$$0 \leq x, y \leq 99$$$) — the number of applications with a $$$1 \times 1$$$ icon and the number of applications with a $$$2 \times 2$$$ icon, respectively.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output the minimal number of required screens on a separate line.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0020818347182930808" id="id004474280798077732" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0020818347182930808"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">11</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 1</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">7 2</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">12 4</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">0 3</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">1 0</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">8 1</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">0 0</div><div class="test-example-line test-example-line-even test-example-line-8" bis_skin_checked="1">2 0</div><div class="test-example-line test-example-line-odd test-example-line-9" bis_skin_checked="1">15 0</div><div class="test-example-line test-example-line-even test-example-line-10" bis_skin_checked="1">8 2</div><div class="test-example-line test-example-line-odd test-example-line-11" bis_skin_checked="1">0 9</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007606280701760157" id="id0006721057074446424" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007606280701760157">1
1
2
2
1
1
0
1
1
2
5
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>The solution for the first test case can look as follows:</p><center> <img class="tex-graphics" height="189px" src="https://espresso.codeforces.com/69bfe873bb73df843b5e6cfe368944566e59deae.png" style="max-width: 100.0%;max-height: 100.0%;"> <span class="tex-font-size-small">Blue squares represent empty spaces for icons, green squares represent $$$1 \times 1$$$ icons, red squares represent $$$2 \times 2$$$ icons</span> </center><p>The solution for the third test case can look as follows:</p><center> <img class="tex-graphics" height="189px" src="https://espresso.codeforces.com/facbdb8597936a2abe24d5c89da8f0ef149a84fb.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div>