<h2><a href="https://codeforces.com/contest/1866/problem/B" target="_blank" rel="noopener noreferrer">1866B — Battling with Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1866B](https://codeforces.com/contest/1866/problem/B) |

## Topics
`combinatorics` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Battling with Numbers</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>On the trip to campus during the mid semester exam period, Chaneka thinks of two positive integers $$$X$$$ and $$$Y$$$. Since the two integers can be very big, both are represented using their prime factorisations, such that: </p><ul> <li> $$$X=A_1^{B_1}\times A_2^{B_2}\times\ldots\times A_N^{B_N}$$$ (each $$$A_i$$$ is prime, each $$$B_i$$$ is positive, and $$$A_1 \lt A_2 \lt \ldots \lt A_N$$$) </li><li> $$$Y=C_1^{D_1}\times C_2^{D_2}\times\ldots\times C_M^{D_M}$$$ (each $$$C_j$$$ is prime, each $$$D_j$$$ is positive, and $$$C_1 \lt C_2 \lt \ldots \lt C_M$$$) </li></ul><p>Chaneka ponders about these two integers for too long throughout the trip, so Chaneka's friend commands her "Gece, deh!" (move fast) in order to not be late for the exam.</p><p>Because of that command, Chaneka comes up with a problem, how many pairs of positive integers $$$p$$$ and $$$q$$$ such that $$$\text{LCM}(p, q) = X$$$ and $$$\text{GCD}(p, q) = Y$$$. Since the answer can be very big, output the answer modulo $$$998\,244\,353$$$.</p><p>Notes: </p><ul> <li> $$$\text{LCM}(p, q)$$$ is the smallest positive integer that is simultaneously divisible by $$$p$$$ and $$$q$$$. </li><li> $$$\text{GCD}(p, q)$$$ is the biggest positive integer that simultaneously divides $$$p$$$ and $$$q$$$. </li></ul></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$N$$$ ($$$1 \leq N \leq 10^5$$$) — the number of distinct primes in the prime factorisation of $$$X$$$.</p><p>The second line contains $$$N$$$ integers $$$A_1, A_2, A_3, \ldots, A_N$$$ ($$$2 \leq A_1  \lt  A_2  \lt  \ldots  \lt  A_N \leq 2 \cdot 10^6$$$; each $$$A_i$$$ is prime) — the primes in the prime factorisation of $$$X$$$.</p><p>The third line contains $$$N$$$ integers $$$B_1, B_2, B_3, \ldots, B_N$$$ ($$$1 \leq B_i \leq 10^5$$$) — the exponents in the prime factorisation of $$$X$$$.</p><p>The fourth line contains a single integer $$$M$$$ ($$$1 \leq M \leq 10^5$$$) — the number of distinct primes in the prime factorisation of $$$Y$$$.</p><p>The fifth line contains $$$M$$$ integers $$$C_1, C_2, C_3, \ldots, C_M$$$ ($$$2 \leq C_1  \lt  C_2  \lt  \ldots  \lt  C_M \leq 2 \cdot 10^6$$$; each $$$C_j$$$ is prime) — the primes in the prime factorisation of $$$Y$$$.</p><p>The sixth line contains $$$M$$$ integers $$$D_1, D_2, D_3, \ldots, D_M$$$ ($$$1 \leq D_j \leq 10^5$$$) — the exponents in the prime factorisation of $$$Y$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>An integer representing the number of pairs of positive integers $$$p$$$ and $$$q$$$ such that $$$\text{LCM}(p, q) = X$$$ and $$$\text{GCD}(p, q) = Y$$$, modulo $$$998\,244\,353$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id008083441376340609" id="id004675852730697697" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008083441376340609">4
2 3 5 7
2 1 1 2
2
3 7
1 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006223906294963215" id="id008422686654715938" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006223906294963215">8
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0020124810785631564" id="id005255286829783563" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0020124810785631564">2
1299721 1999993
100000 265
2
1299721 1999993
100000 265
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id008211113774417016" id="id0041374563341992643" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008211113774417016">1
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id000603818773664655" id="id00591286607249653" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id000603818773664655">2
2 5
1 1
2
2 3
1 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id004438720415096298" id="id0016279665453036984" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004438720415096298">0
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first example, the integers are as follows: </p><ul> <li> $$$X=2^2\times3^1\times5^1\times7^2=2940$$$ </li><li> $$$Y=3^1\times7^1=21$$$ </li></ul><p>The following are all possible pairs of $$$p$$$ and $$$q$$$: </p><ul> <li> $$$p=21$$$, $$$q=2940$$$ </li><li> $$$p=84$$$, $$$q=735$$$ </li><li> $$$p=105$$$, $$$q=588$$$ </li><li> $$$p=147$$$, $$$q=420$$$ </li><li> $$$p=420$$$, $$$q=147$$$ </li><li> $$$p=588$$$, $$$q=105$$$ </li><li> $$$p=735$$$, $$$q=84$$$ </li><li> $$$p=2940$$$, $$$q=21$$$ </li></ul><p>In the third example, the integers are as follows: </p><ul> <li> $$$X=2^1\times5^1=10$$$ </li><li> $$$Y=2^1\times3^1=6$$$ </li></ul><p>There is no pair $$$p$$$ and $$$q$$$ that simultaneously satisfies $$$\text{LCM}(p,q)=10$$$ and $$$\text{GCD}(p,q)=6$$$.</p></div>