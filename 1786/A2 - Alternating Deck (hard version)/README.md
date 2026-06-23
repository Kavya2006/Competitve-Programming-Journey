<h2><a href="https://codeforces.com/contest/1786/problem/A2" target="_blank" rel="noopener noreferrer">1786A2 — Alternating Deck (hard version)</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1786A2](https://codeforces.com/contest/1786/problem/A2) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A2. Alternating Deck (hard version)</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">This is a hard version of the problem. In this version, there are two colors of the cards.</span></p><p>Alice has $$$n$$$ cards, each card is either black or white. The cards are stacked in a deck in such a way that the card colors alternate, starting from a white card. Alice deals the cards to herself and to Bob, dealing at once several cards from the top of the deck in the following order: one card to herself, two cards to Bob, three cards to Bob, four cards to herself, five cards to herself, six cards to Bob, seven cards to Bob, eight cards to herself, and so on. In other words, on the $$$i$$$-th step, Alice deals $$$i$$$ top cards from the deck to one of the players; on the first step, she deals the cards to herself and then alternates the players every two steps. When there aren't enough cards at some step, Alice deals all the remaining cards to the current player, and the process stops.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/c810f71ddeae64b85c66e57deb3a0ca5ca63f8b4.png" style="max-width: 100.0%;max-height: 100.0%;" width="378px"> <span class="tex-font-size-small">First Alice's steps in a deck of many cards.</span> </center><p>How many cards of each color will Alice and Bob have at the end?</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 200$$$). The description of the test cases follows</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 10^6$$$) — the number of cards.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print four integers — the number of cards in the end for each player — in this order: white cards Alice has, black cards Alice has, white cards Bob has, black cards Bob has.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0047662884535059735" id="id0038878516783382566" class="input-output-copier">Copy</div></div><pre id="id0047662884535059735"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">10</div><div class="test-example-line test-example-line-even test-example-line-2">6</div><div class="test-example-line test-example-line-odd test-example-line-3">17</div><div class="test-example-line test-example-line-even test-example-line-4">8</div><div class="test-example-line test-example-line-odd test-example-line-5">1000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002024031177887865" id="id006872263699136614" class="input-output-copier">Copy</div></div><pre id="id002024031177887865">3 2 2 3
1 0 2 3
6 4 3 4
2 1 2 3
250278 249924 249722 250076
</pre></div></div></div>