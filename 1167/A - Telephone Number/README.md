<h2><a href="https://codeforces.com/contest/1167/problem/A" target="_blank" rel="noopener noreferrer">1167A — Telephone Number</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1167A](https://codeforces.com/contest/1167/problem/A) |

## Topics
`brute force` `greedy` `strings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Telephone Number</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>A telephone number is a sequence of exactly <span class="tex-font-style-tt">11</span> digits, where the first digit is <span class="tex-font-style-tt">8</span>. For example, the sequence <span class="tex-font-style-tt">80011223388</span> is a telephone number, but the sequences <span class="tex-font-style-tt">70011223388</span> and <span class="tex-font-style-tt">80000011223388</span> are not.</p><p>You are given a string $$$s$$$ of length $$$n$$$, consisting of digits.</p><p>In one operation you can delete any character from string $$$s$$$. For example, it is possible to obtain strings <span class="tex-font-style-tt">112</span>, <span class="tex-font-style-tt">111</span> or <span class="tex-font-style-tt">121</span> from string <span class="tex-font-style-tt">1121</span>.</p><p>You need to determine whether there is such a sequence of operations (possibly empty), after which the string $$$s$$$ becomes a telephone number.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>The first line of each test case contains one integer $$$n$$$ ($$$1 \le n \le 100$$$) — the length of string $$$s$$$.</p><p>The second line of each test case contains the string $$$s$$$ ($$$|s| = n$$$) consisting of digits.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test print one line.</p><p>If there is a sequence of operations, after which $$$s$$$ becomes a telephone number, print <span class="tex-font-style-tt">YES</span>.</p><p>Otherwise, print <span class="tex-font-style-tt">NO</span>.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id000069726666025070605" id="id008062969268074214" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id000069726666025070605">2
13
7818005553535
11
31415926535
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007702269216245415" id="id00628964635966286" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007702269216245415">YES
NO
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case you need to delete the first and the third digits. Then the string <span class="tex-font-style-tt">7818005553535</span> becomes <span class="tex-font-style-tt">88005553535</span>.</p></div>