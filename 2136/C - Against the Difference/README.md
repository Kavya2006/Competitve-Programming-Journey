<h2><a href="https://codeforces.com/contest/2136/problem/C" target="_blank" rel="noopener noreferrer">2136C — Against the Difference</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2136C](https://codeforces.com/contest/2136/problem/C) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Against the Difference</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>  </p><p>We define that a <span class="tex-font-style-it">block</span> is an array where all elements in it are equal to the length of the array. For example, $$$[3, 3, 3]$$$, $$$[1]$$$, and $$$[4, 4, 4, 4]$$$ are <span class="tex-font-style-it">blocks</span>, while $$$[1, 1, 1]$$$ and $$$[2, 3, 3]$$$ are not.</p><p>An array is called <span class="tex-font-style-it">neat</span> if it can be obtained by the concatenation of an arbitrary number of <span class="tex-font-style-it">blocks</span> (possibly zero). Note that an empty array is always <span class="tex-font-style-it">neat</span>.</p><p>You are given an array $$$a$$$ consisting of $$$n$$$ integers. Find the length of its longest <span class="tex-font-style-it">neat</span> subsequence$$$^{\text{∗}}$$$. </p><div class="statement-footnote" bis_skin_checked="1"><p>$$$^{\text{∗}}$$$A sequence $$$c$$$ is a subsequence of a sequence $$$a$$$ if $$$c$$$ can be obtained from $$$a$$$ by the deletion of several (possibly, zero or all) element from arbitrary positions. </p></div></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows. </p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \le n \le 2\cdot 10^5$$$) — the length of $$$a$$$.</p><p>The second line contains $$$n$$$ integers $$$a_1,a_2,\ldots,a_n$$$ ($$$1 \le a_i \le n$$$) — the elements of $$$a$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2\cdot 10^5$$$. </p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output a single integer — the length of the longest <span class="tex-font-style-it">neat</span> subsequence of $$$a$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id00013241687373880762" id="id002496987306910129" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre data-content="6
1
1
2
2 2
4
2 2 1 1
6
1 2 3 3 3 1
8
8 8 8 8 8 8 8 7
10
2 3 3 1 2 3 5 1 1 7
" id="id00013241687373880762"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">6</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">2 2</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">2 2 1 1</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">6</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">1 2 3 3 3 1</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">8</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">8 8 8 8 8 8 8 7</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">10</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">2 3 3 1 2 3 5 1 1 7</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0041071677406721707" id="id003214473343872142" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0041071677406721707">1
2
4
5
0
5
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, the whole array $$$[1]$$$ is <span class="tex-font-style-it">neat</span> because it is a <span class="tex-font-style-it">block</span>.</p><p>In the second test case, the whole array $$$[2, 2]$$$ is <span class="tex-font-style-it">neat</span> because it is a <span class="tex-font-style-it">block</span>.</p><p>In the third test case, the whole array $$$[2,2,1,1]$$$ is <span class="tex-font-style-it">neat</span> because it is the concatenation of three <span class="tex-font-style-it">blocks</span>: $$$[2,2]$$$, $$$[1]$$$, and $$$[1]$$$.</p><p>In the fourth test case, one of the longest <span class="tex-font-style-it">neat</span> subsequences of $$$a$$$ is $$$[1, 3, 3, 3, 1]$$$.</p><p>In the fifth test case, the longest <span class="tex-font-style-it">neat</span> subsequence of $$$a$$$ is the empty subsequence.</p></div>