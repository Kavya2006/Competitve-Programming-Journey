<h2><a href="https://codeforces.com/contest/1776/problem/L" target="_blank" rel="noopener noreferrer">1776L — Controllers</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1776L](https://codeforces.com/contest/1776/problem/L) |

## Topics
`binary search` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">L. Controllers</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are at your grandparents' house and you are playing an old video game on a strange console. Your controller has only two buttons and each button has a number written on it.</p><p>Initially, your score is $$$0$$$. The game is composed of $$$n$$$ rounds. For each $$$1\le i\le n$$$, the $$$i$$$-th round works as follows.</p><p>On the screen, a symbol $$$s_i$$$ appears, which is either $$$\texttt{+}$$$ (<span class="tex-font-style-it">plus</span>) or $$$\texttt{-}$$$ (<span class="tex-font-style-it">minus</span>). Then you must press one of the two buttons on the controller <span class="tex-font-style-bf">once</span>. Suppose you press a button with the number $$$x$$$ written on it: your score will increase by $$$x$$$ if the symbol was $$$\texttt{+}$$$ and will decrease by $$$x$$$ if the symbol was $$$\texttt{-}$$$. After you press the button, the round ends. </p><p>After you have played all $$$n$$$ rounds, you win if your score is $$$0$$$.</p><p>Over the years, your grandparents bought many different controllers, so you have $$$q$$$ of them. The two buttons on the $$$j$$$-th controller have the numbers $$$a_j$$$ and $$$b_j$$$ written on them. For each controller, you must compute whether you can win the game playing with that controller.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$n$$$ ($$$1 \le n \le 2\cdot 10^5$$$) — the number of rounds.</p><p>The second line contains a string $$$s$$$ of length $$$n$$$ — where $$$s_i$$$ is the symbol that will appear on the screen in the $$$i$$$-th round. It is guaranteed that $$$s$$$ contains only the characters $$$\texttt{+}$$$ and $$$\texttt{-}$$$.</p><p>The third line contains an integer $$$q$$$ ($$$1 \le q \le 10^5$$$) — the number of controllers.</p><p>The following $$$q$$$ lines contain two integers $$$a_j$$$ and $$$b_j$$$ each ($$$1 \le a_j, b_j \le 10^9$$$) — the numbers on the buttons of controller $$$j$$$. </p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Output $$$q$$$ lines. On line $$$j$$$ print $$$\texttt{YES}$$$ if the game is winnable using controller $$$j$$$, otherwise print $$$\texttt{NO}$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Examples</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0020035776557242801" id="id000685899050772314" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0020035776557242801">8
+-+---+-
5
2 1
10 3
7 9
10 10
5 3
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id001272802682519315" id="id0047449724392455417" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id001272802682519315">YES
NO
NO
NO
YES
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006212735566482108" id="id00019298179142403504" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006212735566482108">6
+-++--
2
9 7
1 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0019500118400127286" id="id0028463529770168805" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0019500118400127286">YES
YES
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id00535021102587756" id="id0043966834283584744" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00535021102587756">20
+-----+--+--------+-
2
1000000000 99999997
250000000 1000000000
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007287329735825986" id="id006653379904009634" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007287329735825986">NO
YES
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the <span class="tex-font-style-bf">first sample</span>, one possible way to get score $$$0$$$ using the first controller is by pressing the button with numnber $$$1$$$ in rounds $$$1$$$, $$$2$$$, $$$4$$$, $$$5$$$, $$$6$$$ and $$$8$$$, and pressing the button with number $$$2$$$ in rounds $$$3$$$ and $$$7$$$. It is possible to show that there is no way to get a score of $$$0$$$ using the second controller.</p></div>