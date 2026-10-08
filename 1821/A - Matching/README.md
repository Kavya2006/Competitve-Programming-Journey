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

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Matching</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>512 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>An <span class="tex-font-style-it">integer template</span> is a string consisting of digits and/or question marks.</p><p>A positive (strictly greater than $$$0$$$) integer matches the integer template if it is possible to replace every question mark in the template with a digit in such a way that we get the decimal representation of that integer <span class="tex-font-style-bf">without any leading zeroes</span>.</p><p>For example:</p><ul> <li> $$$42$$$ matches <span class="tex-font-style-tt">4?</span>; </li><li> $$$1337$$$ matches <span class="tex-font-style-tt">????</span>; </li><li> $$$1337$$$ matches <span class="tex-font-style-tt">1?3?</span>; </li><li> $$$1337$$$ matches <span class="tex-font-style-tt">1337</span>; </li><li> $$$3$$$ does not match <span class="tex-font-style-tt">??</span>; </li><li> $$$8$$$ does not match <span class="tex-font-style-tt">???8</span>; </li><li> $$$1337$$$ does not match <span class="tex-font-style-tt">1?7</span>. </li></ul><p>You are given an integer template consisting of <span class="tex-font-style-bf">at most $$$5$$$ characters</span>. Calculate the number of positive (strictly greater than $$$0$$$) integers that match it.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 2 \cdot 10^4$$$) — the number of test cases.</p><p>Each test case consists of one line containing the string $$$s$$$ ($$$1 \le |s| \le 5$$$) consisting of digits and/or question marks — the integer template for the corresponding test case.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print one integer — the number of positive (strictly greater than $$$0$$$) integers that match the template.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0041790169224862084" id="id005424692318488381" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0041790169224862084"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">8</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">??</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">?</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">0</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">9</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">03</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">1??7</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">?5?</div><div class="test-example-line test-example-line-even test-example-line-8" bis_skin_checked="1">9??99</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id005647265457923972" id="id002837223879981632" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005647265457923972">90
9
0
1
0
100
90
100
</pre></div></div></div>