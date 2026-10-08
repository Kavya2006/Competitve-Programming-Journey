<h2><a href="https://codeforces.com/contest/1899/problem/A" target="_blank" rel="noopener noreferrer">1899A — Game with Integers</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1899A](https://codeforces.com/contest/1899/problem/A) |

## Topics
`games` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Game with Integers</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Vanya and Vova are playing a game. Players are given an integer $$$n$$$. On their turn, the player can add $$$1$$$ to the current integer or subtract $$$1$$$. The players take turns; Vanya starts. If <span class="tex-font-style-bf">after</span> Vanya's move the integer is divisible by $$$3$$$, then he wins. If $$$10$$$ moves have passed and Vanya has not won, then Vova wins.</p><p>Write a program that, based on the integer $$$n$$$, determines who will win if both players play optimally.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains the integer $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of test cases.</p><p>The single line of each test case contains the integer $$$n$$$ ($$$1 \leq n \leq 1000$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print "<span class="tex-font-style-tt">First</span>" without quotes if Vanya wins, and "<span class="tex-font-style-tt">Second</span>" without quotes if Vova wins.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0034651017484156066" id="id007607666823079147" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0034651017484156066"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">6</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">1</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">5</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">100</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">999</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">1000</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00375774650319213" id="id0014001848524535587" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00375774650319213">First
Second
First
First
Second
First
</pre></div></div></div>