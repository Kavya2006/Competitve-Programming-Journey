<h2><a href="https://codeforces.com/contest/1873/problem/B" target="_blank" rel="noopener noreferrer">1873B — Good Kid</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1873B](https://codeforces.com/contest/1873/problem/B) |

## Topics
`brute force` `greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Good Kid</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Slavic is preparing a present for a friend's birthday. He has an array $$$a$$$ of $$$n$$$ digits and the present will be the product of all these digits. Because Slavic is a good kid who wants to make the biggest product possible, he wants to add $$$1$$$ to exactly one of his digits. </p><p>What is the maximum product Slavic can make?</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 9$$$) — the number of digits.</p><p>The second line of each test case contains $$$n$$$ space-separated integers $$$a_i$$$ ($$$0 \leq a_i \leq 9$$$) — the digits in the array.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output a single integer — the maximum product Slavic can make, by adding $$$1$$$ to exactly one of his digits.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id000074404262120989495" id="id008667172325592611" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id000074404262120989495"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">2 2 1 2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">0 1 2</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">4 3 2 3 4</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">9</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">9 9 9 9 9 9 9 9 9</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id008031263682744906" id="id002914639360811707" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008031263682744906">16
2
432
430467210
</pre></div></div></div>