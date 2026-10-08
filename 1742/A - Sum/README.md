<h2><a href="https://codeforces.com/contest/1742/problem/A" target="_blank" rel="noopener noreferrer">1742A — Sum</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1742A](https://codeforces.com/contest/1742/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Sum</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given three integers $$$a$$$, $$$b$$$, and $$$c$$$. Determine if one of them is the sum of the other two.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 9261$$$) — the number of test cases.</p><p>The description of each test case consists of three integers $$$a$$$, $$$b$$$, $$$c$$$ ($$$0 \leq a, b, c \leq 20$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output "<span class="tex-font-style-tt">YES</span>" if one of the numbers is the sum of the other two, and "<span class="tex-font-style-tt">NO</span>" otherwise.</p><p>You can output the answer in any case (for example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>" and "<span class="tex-font-style-tt">YES</span>" will be recognized as a positive answer).</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id00773545178500199" id="id0023087783893668146" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00773545178500199"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">7</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1 4 3</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">2 5 8</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">9 11 20</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">0 0 0</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">20 20 20</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">4 12 3</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">15 7 8</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007149121101521461" id="id001722258615979202" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007149121101521461">YES
NO
YES
YES
NO
NO
YES
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, $$$1 + 3 = 4$$$.</p><p>In the second test case, none of the numbers is the sum of the other two.</p><p>In the third test case, $$$9 + 11 = 20$$$.</p></div>