<h2><a href="https://codeforces.com/contest/1955/problem/A" target="_blank" rel="noopener noreferrer">1955A — Yogurt Sale</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1955A](https://codeforces.com/contest/1955/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Yogurt Sale</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>The price of one yogurt at the "Vosmiorochka" store is $$$a$$$ burles, but there is a promotion where you can buy two yogurts for $$$b$$$ burles.</p><p>Maxim needs to buy <span class="tex-font-style-bf">exactly</span> $$$n$$$ yogurts. When buying two yogurts, he can choose to buy them at the regular price or at the promotion price.</p><p>What is the minimum amount of burles Maxim should spend to buy $$$n$$$ yogurts?</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le {10}^{4}$$$) — the number of test cases.</p><p>The first and only line of each test case contains three integers $$$n$$$, $$$a$$$, and $$$b$$$ ($$$1 \le n \le 100$$$, $$$1 \le a, b \le 30$$$) — the number of yogurts Maxim wants to buy, the price for one yogurt, and the price for two yogurts on promotion.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print in a separate line the minimum cost of buying $$$n$$$ yogurts at "Vosmiorochka".</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006288435574501219" id="id008536286404103086" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006288435574501219"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">4</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">2 5 9</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">3 5 9</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">3 5 11</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">4 5 11</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id003821116136789757" id="id0043962583908551345" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003821116136789757">9
14
15
20
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the third test case of the example, it is more advantageous to buy three yogurts for $$$15$$$ burles than two for $$$11$$$ and one for $$$5$$$.</p><p>In the fourth test case of the example, you need to buy four yogurts, each for $$$5$$$ burles.</p></div>