<h2><a href="https://codeforces.com/contest/1354/problem/B" target="_blank" rel="noopener noreferrer">1354B — Ternary String</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1354B](https://codeforces.com/contest/1354/problem/B) |

## Topics
`binary search` `dp` `implementation` `two pointers`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Ternary String</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given a string $$$s$$$ such that each its character is either <span class="tex-font-style-tt">1</span>, <span class="tex-font-style-tt">2</span>, or <span class="tex-font-style-tt">3</span>. You have to choose the shortest contiguous substring of $$$s$$$ such that it contains each of these three characters at least once.</p><p>A contiguous substring of string $$$s$$$ is a string that can be obtained from $$$s$$$ by removing some (possibly zero) characters from the beginning of $$$s$$$ and some (possibly zero) characters from the end of $$$s$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 20000$$$) — the number of test cases.</p><p>Each test case consists of one line containing the string $$$s$$$ ($$$1 \le |s| \le 200000$$$). It is guaranteed that each character of $$$s$$$ is either <span class="tex-font-style-tt">1</span>, <span class="tex-font-style-tt">2</span>, or <span class="tex-font-style-tt">3</span>.</p><p>The sum of lengths of all strings in all test cases does not exceed $$$200000$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print one integer — the length of the shortest contiguous substring of $$$s$$$ containing all three types of characters at least once. If there is no such substring, print $$$0$$$ instead.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id005874279809463775" id="id005354176351939918" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005874279809463775">7
123
12222133333332
112233
332211
12121212
333333
31121
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00020079638300967262" id="id008893593997446763" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00020079638300967262">3
3
4
4
0
0
4
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>Consider the example test:</p><p>In the first test case, the substring <span class="tex-font-style-tt">123</span> can be used.</p><p>In the second test case, the substring <span class="tex-font-style-tt">213</span> can be used.</p><p>In the third test case, the substring <span class="tex-font-style-tt">1223</span> can be used.</p><p>In the fourth test case, the substring <span class="tex-font-style-tt">3221</span> can be used.</p><p>In the fifth test case, there is no character <span class="tex-font-style-tt">3</span> in $$$s$$$.</p><p>In the sixth test case, there is no character <span class="tex-font-style-tt">1</span> in $$$s$$$.</p><p>In the seventh test case, the substring <span class="tex-font-style-tt">3112</span> can be used.</p></div>