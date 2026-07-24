<h2><a href="https://codeforces.com/contest/1498/problem/B" target="_blank" rel="noopener noreferrer">1498B — Box Fitting</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1498B](https://codeforces.com/contest/1498/problem/B) |

## Topics
`binary search` `bitmasks` `data structures` `greedy`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Box Fitting</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given $$$n$$$ rectangles, each of height $$$1$$$. Each rectangle's width is a power of $$$2$$$ (i. e. it can be represented as $$$2^x$$$ for some non-negative integer $$$x$$$). </p><p>You are also given a two-dimensional box of width $$$W$$$. Note that $$$W$$$ may or may not be a power of $$$2$$$. Moreover, $$$W$$$ is at least as large as the width of the largest rectangle.</p><p>You have to find the smallest height of this box, such that it is able to fit all the given rectangles. It is allowed to have some empty space left in this box after fitting all the rectangles.</p><p>You cannot rotate the given rectangles to make them fit into the box. Moreover, any two distinct rectangles must not overlap, i. e., any two distinct rectangles must have zero intersection area.</p><p>See notes for visual explanation of sample input.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of input contains one integer $$$t$$$ ($$$1 \le t \le 5 \cdot 10^3$$$) — the number of test cases. Each test case consists of two lines.</p><p>For each test case:</p><ul><li> the first line contains two integers $$$n$$$ ($$$1 \le n \le 10^5$$$) and $$$W$$$ ($$$1 \le W \le 10^9$$$);</li><li> the second line contains $$$n$$$ integers $$$w_1, w_2, \dots, w_n$$$ ($$$1 \le w_i \le 10^6$$$), where $$$w_i$$$ is the width of the $$$i$$$-th rectangle. Each $$$w_i$$$ is a power of $$$2$$$;</li><li> additionally, $$$\max\limits_{i=1}^{n} w_i \le W$$$. </li></ul><p>The sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Output $$$t$$$ integers. The $$$i$$$-th integer should be equal to the answer to the $$$i$$$-th test case — the smallest height of the box.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id002820801721570517" id="id008014748129320739" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id002820801721570517">2
5 16
1 2 8 4 8
6 10
2 8 8 2 2 8
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id005403563793272598" id="id007581047462184616" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005403563793272598">2
3
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>For the first test case in the sample input, the following figure shows one way to fit the given five rectangles into the 2D box with minimum height:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/e6ff9bc67e9a82aa90cd065e09fdbfb370eefb4f.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>In the figure above, the number inside each rectangle is its width. The width of the 2D box is $$$16$$$ (indicated with arrow below). The minimum height required for the 2D box in this case is $$$2$$$ (indicated on the left).</p><p>In the second test case, you can have a minimum height of three by keeping two blocks (one each of widths eight and two) on each of the three levels.</p></div>