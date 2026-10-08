<h2><a href="https://codeforces.com/contest/1926/problem/A" target="_blank" rel="noopener noreferrer">1926A — Vlad and the Best of Five</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1926A](https://codeforces.com/contest/1926/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Vlad and the Best of Five</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Vladislav has a string of length $$$5$$$, whose characters are each either $$$\texttt{A}$$$ or $$$\texttt{B}$$$.</p><p>Which letter appears most frequently: $$$\texttt{A}$$$ or $$$\texttt{B}$$$?</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains an integer $$$t$$$ ($$$1 \leq t \leq 32$$$) — the number of test cases.</p><p>The only line of each test case contains a string of length $$$5$$$ consisting of letters $$$\texttt{A}$$$ and $$$\texttt{B}$$$.</p><p>All $$$t$$$ strings in a test are different (distinct).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output one letter ($$$\texttt{A}$$$ or $$$\texttt{B}$$$) denoting the character that appears most frequently in the string.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id00013507213249945638" id="id001852766725774435" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00013507213249945638"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">8</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">ABABB</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">ABABA</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">BBBAB</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">AAAAA</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">BBBBB</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">BABAA</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">AAAAB</div><div class="test-example-line test-example-line-even test-example-line-8" bis_skin_checked="1">BAAAA</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id005761449670899924" id="id007669537284837386" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005761449670899924">B
A
B
A
B
A
A
A
</pre></div></div></div>