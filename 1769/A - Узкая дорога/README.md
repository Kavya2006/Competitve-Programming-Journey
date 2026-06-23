<h2><a href="https://codeforces.com/contest/1769/problem/A" target="_blank" rel="noopener noreferrer">1769A — Узкая дорога</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1769A](https://codeforces.com/contest/1769/problem/A) |

## Topics
`*special` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Узкая дорога</div><div class="time-limit"><div class="property-title">ограничение по времени на тест</div>2 секунды</div><div class="memory-limit"><div class="property-title">ограничение по памяти на тест</div>512 мегабайт</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">ввод</div>стандартный ввод</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">вывод</div>стандартный вывод</div></div><div><p>Колонна из $$$n$$$ самокатов едет по узкой односторонней дороге в пункт Б. Самокаты пронумерованы от $$$1$$$ до $$$n$$$. Для каждого самоката $$$i$$$ известно, что текущее расстояние от него до пункта Б равно $$$a_i$$$ метров. При этом $$$a_1  \lt  a_2  \lt  \ldots  \lt  a_n$$$, в частности, самокат $$$1$$$ находится ближе всего к пункту Б, а самокат $$$n$$$ — дальше всего.</p><p>Самокат с номером $$$i$$$ движется в сторону пункта Б со скоростью $$$i$$$ метров в секунду (то есть чем ближе самокат в колонне к пункту Б, тем медленнее он едет). Так как дорога узкая, самокаты не могут обгонять друг друга. Более того, соседние самокаты в колонне должны соблюдать дистанцию хотя бы в $$$1$$$ метр. Поэтому когда более быстрый самокат догоняет более медленный, более быстрому приходится дальше ехать со скоростью более медленного, причём на расстоянии в $$$1$$$ метр от него.</p><p>Определите, на каком расстоянии до пункта Б будет каждый самокат ровно через одну секунду.</p></div><div class="input-specification"><div class="section-title">Входные данные</div><p>В первой строке задано одно целое число $$$n$$$ ($$$1 \le n \le 100$$$) — число самокатов в колонне.</p><p>В $$$i$$$-й из следующих $$$n$$$ строк задано одно целое число $$$a_i$$$ ($$$1 \le a_i \le 1000$$$; $$$a_1  \lt  a_2  \lt  \ldots  \lt  a_n$$$) — текущее расстояние от самоката $$$i$$$ до пункта Б в метрах.</p></div><div class="output-specification"><div class="section-title">Выходные данные</div><p>Выведите $$$n$$$ целых чисел — расстояния от самокатов $$$1, 2, \ldots, n$$$ до пункта Б в метрах через одну секунду.</p></div><div class="sample-tests"><div class="section-title">Примеры</div><div class="sample-test"><div class="input"><div class="title">Входные данные<div title="Copy" data-clipboard-target="#id009015432385919154" id="id0012889898147716194" class="input-output-copier">Copy</div></div><pre id="id009015432385919154">4
20
30
50
100
</pre></div><div class="output"><div class="title">Выходные данные<div title="Copy" data-clipboard-target="#id009171533963682993" id="id005881691375312448" class="input-output-copier">Copy</div></div><pre id="id009171533963682993">19
28
47
96
</pre></div><div class="input"><div class="title">Входные данные<div title="Copy" data-clipboard-target="#id008092792198998341" id="id008289418056877458" class="input-output-copier">Copy</div></div><pre id="id008092792198998341">5
1
2
3
4
5
</pre></div><div class="output"><div class="title">Выходные данные<div title="Copy" data-clipboard-target="#id007467393532275629" id="id0047590201435393253" class="input-output-copier">Copy</div></div><pre id="id007467393532275629">0
1
2
3
4
</pre></div><div class="input"><div class="title">Входные данные<div title="Copy" data-clipboard-target="#id003120056936221096" id="id004299058206361368" class="input-output-copier">Copy</div></div><pre id="id003120056936221096">8
5
9
10
15
17
18
19
22
</pre></div><div class="output"><div class="title">Выходные данные<div title="Copy" data-clipboard-target="#id007851168780129723" id="id0010627755508466341" class="input-output-copier">Copy</div></div><pre id="id007851168780129723">4
7
8
11
12
13
14
15
</pre></div></div></div><div class="note"><div class="section-title">Примечание</div><p>В первом тесте самокаты пока не мешают друг другу ехать, поэтому каждый самокат $$$i$$$ продвигается на $$$i$$$ метров в сторону пункта Б.</p><p>Во втором тесте самокаты уже выстроились в колонне на расстоянии $$$1$$$ метр друг от друга и вынуждены ехать со скоростью самого медленного самоката с номером $$$1$$$.</p></div>