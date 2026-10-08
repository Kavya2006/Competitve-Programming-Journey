<h2><a href="https://codeforces.com/contest/1426/problem/A" target="_blank" rel="noopener noreferrer">1426A — Floor Number</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1426A](https://codeforces.com/contest/1426/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Floor Number</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Vasya goes to visit his classmate Petya. Vasya knows that Petya's apartment number is $$$n$$$. </p><p>There is only one entrance in Petya's house and the distribution of apartments is the following: the first floor contains $$$2$$$ apartments, every other floor contains $$$x$$$ apartments each. Apartments are numbered starting from one, from the first floor. I.e. apartments on the first floor have numbers $$$1$$$ and $$$2$$$, apartments on the second floor have numbers from $$$3$$$ to $$$(x + 2)$$$, apartments on the third floor have numbers from $$$(x + 3)$$$ to $$$(2 \cdot x + 2)$$$, and so on.</p><p>Your task is to find the number of floor on which Petya lives. Assume that the house is always high enough to fit at least $$$n$$$ apartments.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The only line of the test case contains two integers $$$n$$$ and $$$x$$$ ($$$1 \le n, x \le 1000$$$) — the number of Petya's apartment and the number of apartments on each floor of the house except the first one (there are two apartments on the first floor).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print the answer: the number of floor on which Petya lives.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0019834954771288704" id="id003678618176763859" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0019834954771288704">4
7 3
1 5
22 5
987 13
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id005301482814797838" id="id006361817328036009" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005301482814797838">3
1
5
77
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>Consider the first test case of the example: the first floor contains apartments with numbers $$$1$$$ and $$$2$$$, the second one contains apartments with numbers $$$3$$$, $$$4$$$ and $$$5$$$, the third one contains apartments with numbers $$$6$$$, $$$7$$$ and $$$8$$$. Therefore, Petya lives on the third floor.</p><p>In the second test case of the example, Petya lives in the apartment $$$1$$$ which is on the first floor.</p></div>