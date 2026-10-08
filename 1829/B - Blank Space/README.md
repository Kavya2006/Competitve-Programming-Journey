<h2><a href="https://codeforces.com/contest/1829/problem/B" target="_blank" rel="noopener noreferrer">1829B — Blank Space</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1829B](https://codeforces.com/contest/1829/problem/B) |

## Topics
`implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Blank Space</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given a binary array $$$a$$$ of $$$n$$$ elements, a binary array is an array consisting only of $$$0$$$s and $$$1$$$s. </p><p>A blank space is a segment of <span class="tex-font-style-bf">consecutive</span> elements consisting of only $$$0$$$s. </p><p>Your task is to find the length of the longest blank space.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 100$$$) — the length of the array.</p><p>The second line of each test case contains $$$n$$$ space-separated integers $$$a_i$$$ ($$$0 \leq a_i \leq 1$$$) — the elements of the array.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output a single integer — the length of the longest blank space.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0048806363604982184" id="id007459596275155674" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0048806363604982184"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 0 0 1 0</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">0 1 1 1</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">1</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">0</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">1 1 1</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">9</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">1 0 0 0 1 0 0 0 1</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007357890776828665" id="id0009175109501642598" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007357890776828665">2
1
1
0
3
</pre></div></div></div>