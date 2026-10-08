<h2><a href="https://codeforces.com/contest/1998/problem/A" target="_blank" rel="noopener noreferrer">1998A — Find K Distinct Points with Fixed Center</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1998A](https://codeforces.com/contest/1998/problem/A) |

## Topics
`constructive algorithms` `implementation` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Find K Distinct Points with Fixed Center</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><div class="epigraph" bis_skin_checked="1"><div class="epigraph-text" bis_skin_checked="1"><span class="tex-font-style-it">I couldn't think of a good title for this problem, so I decided to learn from LeetCode.</span></div><div class="epigraph-source" bis_skin_checked="1">— Sun Tzu, <span class="tex-font-style-it">The Art of War</span></div></div><p>You are given three integers $$$x_c$$$, $$$y_c$$$, and $$$k$$$ ($$$-100 \leq x_c, y_c \leq 100$$$, $$$1 \leq k \leq 1000$$$). </p><p>You need to find $$$k$$$ <span class="tex-font-style-bf">distinct</span> points ($$$x_1, y_1$$$), ($$$x_2, y_2$$$), $$$\ldots$$$, ($$$x_k, y_k$$$), having integer coordinates, on the 2D coordinate plane such that: </p><ul> <li> their center$$$^{\text{∗}}$$$ is ($$$x_c, y_c$$$) </li><li> $$$-10^9 \leq x_i, y_i \leq 10^9$$$ for all $$$i$$$ from $$$1$$$ to $$$k$$$ </li></ul> <p>It can be proven that at least one set of $$$k$$$ distinct points always exists that satisfies these conditions.</p><div class="statement-footnote" bis_skin_checked="1"><p>$$$^{\text{∗}}$$$The center of $$$k$$$ points ($$$x_1, y_1$$$), ($$$x_2, y_2$$$), $$$\ldots$$$, ($$$x_k, y_k$$$) is $$$\left( \frac{x_1 + x_2 + \ldots + x_k}{k}, \frac{y_1 + y_2 + \ldots + y_k}{k} \right)$$$.</p></div></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of test cases.</p><p>Each test case contains three integers $$$x_c$$$, $$$y_c$$$, and $$$k$$$ ($$$-100 \leq x_c, y_c \leq 100$$$, $$$1 \leq k \leq 1000$$$) — the coordinates of the center and the number of distinct points you must output.</p><p>It is guaranteed that the sum of $$$k$$$ over all test cases does not exceed $$$1000$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output $$$k$$$ lines, the $$$i$$$-th line containing two space separated integers, $$$x_i$$$ and $$$y_i$$$, ($$$-10^9 \leq x_i, y_i \leq 10^9$$$) — denoting the position of the $$$i$$$-th point.</p><p>If there are multiple answers, print any of them. It can be shown that a solution always exists under the given constraints.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0016980262318276296" id="id007791897555337469" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0016980262318276296"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">10 10 1</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">0 0 3</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">-5 -8 8</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">4 -5 3</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007742445307537512" id="id0045869999280280227" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007742445307537512">10 10
-1 -1
5 -1
-4 2
-6 -7
-5 -7
-4 -7
-4 -8
-4 -9
-5 -9
-6 -9
-6 -8
1000 -1000
-996 995
8 -10</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>For the first test case, $$$\left( \frac{10}{1}, \frac{10}{1} \right) = (10, 10)$$$.</p><p>For the second test case, $$$\left( \frac{-1 + 5 - 4}{3}, \frac{-1 -1 + 2}{3} \right) = (0, 0)$$$.</p></div>