<h2><a href="https://codeforces.com/contest/1720/problem/A" target="_blank" rel="noopener noreferrer">1720A — Burenka Plays with Fractions</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1720A](https://codeforces.com/contest/1720/problem/A) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Burenka Plays with Fractions</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Burenka came to kindergarden. This kindergarten is quite strange, so each kid there receives two fractions ($$$\frac{a}{b}$$$ and $$$\frac{c}{d}$$$) with integer numerators and denominators. Then children are commanded to play with their fractions.</p><p>Burenka is a clever kid, so she noticed that when she claps once, she can multiply numerator or denominator of one of her two fractions by any integer of her choice (but she can't multiply denominators by $$$0$$$). Now she wants know the minimal number of claps to make her fractions equal (by <span class="tex-font-style-bf">value</span>). Please help her and find the required number of claps!</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases. Then follow the descriptions of each test case.</p><p>The only line of each test case contains four integers $$$a$$$, $$$b$$$, $$$c$$$ and $$$d$$$ ($$$0 \leq a, c \leq 10^9$$$, $$$1 \leq b, d \leq 10^9$$$) — numerators and denominators of the fractions given to Burenka initially.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case print a single integer — the minimal number of claps Burenka needs to make her fractions equal.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id001793935427003691" id="id0007779202988691969" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id001793935427003691"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">8</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">2 1 1 1</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">6 3 2 1</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">1 2 2 3</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">0 1 0 100</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">0 1 228 179</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">100 3 25 6</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">999999999 300000000 666666666 100000000</div><div class="test-example-line test-example-line-even test-example-line-8" bis_skin_checked="1">33 15 0 84</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id00009752783246696484" id="id00025122697626993817" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00009752783246696484">1
0
2
0
1
1
1
1
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first case, Burenka can multiply $$$c$$$ by $$$2$$$, then the fractions will be equal.</p><p>In the second case, fractions are already equal.</p><p>In the third case, Burenka can multiply $$$a$$$ by $$$4$$$, then $$$b$$$ by $$$3$$$. Then the fractions will be equal ($$$\frac{1 \cdot 4}{2 \cdot 3} = \frac{2}{3}$$$).</p></div>