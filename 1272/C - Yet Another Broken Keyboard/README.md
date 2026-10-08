<h2><a href="https://codeforces.com/contest/1272/problem/C" target="_blank" rel="noopener noreferrer">1272C — Yet Another Broken Keyboard</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1272C](https://codeforces.com/contest/1272/problem/C) |

## Topics
`combinatorics` `dp` `implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Yet Another Broken Keyboard</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Recently, Norge found a string $$$s = s_1 s_2 \ldots s_n$$$ consisting of $$$n$$$ lowercase Latin letters. As an exercise to improve his typing speed, he decided to type all substrings of the string $$$s$$$. Yes, all $$$\frac{n (n + 1)}{2}$$$ of them!</p><p>A substring of $$$s$$$ is a non-empty string $$$x = s[a \ldots b] = s_{a} s_{a + 1} \ldots s_{b}$$$ ($$$1 \leq a \leq b \leq n$$$). For example, "<span class="tex-font-style-tt">auto</span>" and "<span class="tex-font-style-tt">ton</span>" are substrings of "<span class="tex-font-style-tt">automaton</span>".</p><p>Shortly after the start of the exercise, Norge realized that his keyboard was broken, namely, he could use only $$$k$$$ Latin letters $$$c_1, c_2, \ldots, c_k$$$ out of $$$26$$$.</p><p>After that, Norge became interested in how many substrings of the string $$$s$$$ he could still type using his broken keyboard. Help him to find this number.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains two space-separated integers $$$n$$$ and $$$k$$$ ($$$1 \leq n \leq 2 \cdot 10^5$$$, $$$1 \leq k \leq 26$$$) — the length of the string $$$s$$$ and the number of Latin letters still available on the keyboard.</p><p>The second line contains the string $$$s$$$ consisting of exactly $$$n$$$ lowercase Latin letters.</p><p>The third line contains $$$k$$$ space-separated distinct lowercase Latin letters $$$c_1, c_2, \ldots, c_k$$$ — the letters still available on the keyboard.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print a single number — the number of substrings of $$$s$$$ that can be typed using only available letters $$$c_1, c_2, \ldots, c_k$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id003129534100105278" id="id007004114704662273" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003129534100105278">7 2
abacaba
a b
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00007674198299728041" id="id0004291247674597143" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00007674198299728041">12
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0012355626442830414" id="id0013574822219314464" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0012355626442830414">10 3
sadfaasdda
f a d
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0016270864396989937" id="id006493991857463555" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0016270864396989937">21
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id005152527331839029" id="id006933430434486753" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005152527331839029">7 1
aaaaaaa
b
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0012691561447448674" id="id0043264097375645527" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0012691561447448674">0
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first example Norge can print substrings $$$s[1\ldots2]$$$, $$$s[2\ldots3]$$$, $$$s[1\ldots3]$$$, $$$s[1\ldots1]$$$, $$$s[2\ldots2]$$$, $$$s[3\ldots3]$$$, $$$s[5\ldots6]$$$, $$$s[6\ldots7]$$$, $$$s[5\ldots7]$$$, $$$s[5\ldots5]$$$, $$$s[6\ldots6]$$$, $$$s[7\ldots7]$$$.</p></div>