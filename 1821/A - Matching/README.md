<h2><a href="https://codeforces.com/contest/1821/problem/A" target="_blank" rel="noopener noreferrer">1821A — Matching</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1821A](https://codeforces.com/contest/1821/problem/A) |

## Topics
`combinatorics` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Matching</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>An <span class="tex-font-style-it">integer template</span> is a string consisting of digits and/or question marks.</p><p>A positive (strictly greater than $$$0$$$) integer matches the integer template if it is possible to replace every question mark in the template with a digit in such a way that we get the decimal representation of that integer <span class="tex-font-style-bf">without any leading zeroes</span>.</p><p>For example:</p><ul> <li> $$$42$$$ matches <span class="tex-font-style-tt">4?</span>; </li><li> $$$1337$$$ matches <span class="tex-font-style-tt">????</span>; </li><li> $$$1337$$$ matches <span class="tex-font-style-tt">1?3?</span>; </li><li> $$$1337$$$ matches <span class="tex-font-style-tt">1337</span>; </li><li> $$$3$$$ does not match <span class="tex-font-style-tt">??</span>; </li><li> $$$8$$$ does not match <span class="tex-font-style-tt">???8</span>; </li><li> $$$1337$$$ does not match <span class="tex-font-style-tt">1?7</span>. </li></ul><p>You are given an integer template consisting of <span class="tex-font-style-bf">at most $$$5$$$ characters</span>. Calculate the number of positive (strictly greater than $$$0$$$) integers that match it.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 2 \cdot 10^4$$$) — the number of test cases.</p><p>Each test case consists of one line containing the string $$$s$$$ ($$$1 \le |s| \le 5$$$) consisting of digits and/or question marks — the integer template for the corresponding test case.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the number of positive (strictly greater than $$$0$$$) integers that match the template.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006344250203276522" id="id007290366646194796" class="input-output-copier">Copy</div></div><pre id="id006344250203276522"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">??</div><div class="test-example-line test-example-line-even test-example-line-2">?</div><div class="test-example-line test-example-line-odd test-example-line-3">0</div><div class="test-example-line test-example-line-even test-example-line-4">9</div><div class="test-example-line test-example-line-odd test-example-line-5">03</div><div class="test-example-line test-example-line-even test-example-line-6">1??7</div><div class="test-example-line test-example-line-odd test-example-line-7">?5?</div><div class="test-example-line test-example-line-even test-example-line-8">9??99</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009626567541710629" id="id004256015801101065" class="input-output-copier">Copy</div></div><pre id="id009626567541710629">90
9
0
1
0
100
90
100
</pre></div></div></div>