<h2><a href="https://codeforces.com/contest/1574/problem/A" target="_blank" rel="noopener noreferrer">1574A — Regular Bracket Sequences</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1574A](https://codeforces.com/contest/1574/problem/A) |

## Topics
`constructive algorithms`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Regular Bracket Sequences</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>512 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>A bracket sequence is a string containing only characters "<span class="tex-font-style-tt">(</span>" and "<span class="tex-font-style-tt">)</span>". A regular bracket sequence is a bracket sequence that can be transformed into a correct arithmetic expression by inserting characters "<span class="tex-font-style-tt">1</span>" and "<span class="tex-font-style-tt">+</span>" between the original characters of the sequence. For example, bracket sequences "<span class="tex-font-style-tt">()()</span>" and "<span class="tex-font-style-tt">(())</span>" are regular (the resulting expressions are: "<span class="tex-font-style-tt">(1)+(1)</span>" and "<span class="tex-font-style-tt">((1+1)+1)</span>"), and "<span class="tex-font-style-tt">)(</span>", "<span class="tex-font-style-tt">(</span>" and "<span class="tex-font-style-tt">)</span>" are not.</p><p>You are given an integer $$$n$$$. Your goal is to construct and print <span class="tex-font-style-bf">exactly $$$n$$$</span> different regular bracket sequences of length $$$2n$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 50$$$) — the number of test cases.</p><p>Each test case consists of one line containing one integer $$$n$$$ ($$$1 \le n \le 50$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print $$$n$$$ lines, each containing a regular bracket sequence of length <span class="tex-font-style-bf">exactly $$$2n$$$</span>. All bracket sequences you output for a testcase should be different (though they may repeat in different test cases). If there are multiple answers, print any of them. It can be shown that it's always possible.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0019945428866285442" id="id0048866340788463625" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0019945428866285442">3
3
1
3
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id004352170354035684" id="id001704418505892833" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004352170354035684">()()()
((()))
(()())
()
((()))
(())()
()(())
</pre></div></div></div>