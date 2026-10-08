<h2><a href="https://codeforces.com/contest/1411/problem/B" target="_blank" rel="noopener noreferrer">1411B — Fair Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1411B](https://codeforces.com/contest/1411/problem/B) |

## Topics
`brute force` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Fair Numbers</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>We call a positive integer number <span class="tex-font-style-it">fair</span> if it is divisible by each of its nonzero digits. For example, $$$102$$$ is fair (because it is divisible by $$$1$$$ and $$$2$$$), but $$$282$$$ is not, because it isn't divisible by $$$8$$$. Given a positive integer $$$n$$$. Find the minimum integer $$$x$$$, such that $$$n \leq x$$$ and $$$x$$$ is fair.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains number of test cases $$$t$$$ ($$$1 \leq t \leq 10^3$$$). Each of the next $$$t$$$ lines contains an integer $$$n$$$ ($$$1 \leq n \leq 10^{18}$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each of $$$t$$$ test cases print a single integer — the least <span class="tex-font-style-it">fair</span> number, which is not less than $$$n$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id001707256457784606" id="id006595949824544955" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id001707256457784606">4
1
282
1234567890
1000000000000000000
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007832923327182885" id="id003693100656966404" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007832923327182885">1
288
1234568040
1000000000000000000
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>Explanations for some test cases: </p><ul> <li> In the first test case number $$$1$$$ is fair itself. </li><li> In the second test case number $$$288$$$ is fair (it's divisible by both $$$2$$$ and $$$8$$$). None of the numbers from $$$[282, 287]$$$ is fair, because, for example, none of them is divisible by $$$8$$$. </li></ul></div>