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

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Узкая дорога</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">ограничение по времени на тест</div>2 секунды</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">ограничение по памяти на тест</div>512 мегабайт</div><div class="input-file input-standard" style="font-weight: bold" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">ввод</div>стандартный ввод</div><div class="output-file output-standard" style="font-weight: bold" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">вывод</div>стандартный вывод</div></div><div bis_skin_checked="1"><p>Колонна из $$$n$$$ самокатов едет по узкой односторонней дороге в пункт Б. Самокаты пронумерованы от $$$1$$$ до $$$n$$$. Для каждого самоката $$$i$$$ известно, что текущее расстояние от него до пункта Б равно $$$a_i$$$ метров. При этом $$$a_1  \lt  a_2  \lt  \ldots  \lt  a_n$$$, в частности, самокат $$$1$$$ находится ближе всего к пункту Б, а самокат $$$n$$$ — дальше всего.</p><p>Самокат с номером $$$i$$$ движется в сторону пункта Б со скоростью $$$i$$$ метров в секунду (то есть чем ближе самокат в колонне к пункту Б, тем медленнее он едет). Так как дорога узкая, самокаты не могут обгонять друг друга. Более того, соседние самокаты в колонне должны соблюдать дистанцию хотя бы в $$$1$$$ метр. Поэтому когда более быстрый самокат догоняет более медленный, более быстрому приходится дальше ехать со скоростью более медленного, причём на расстоянии в $$$1$$$ метр от него.</p><p>Определите, на каком расстоянии до пункта Б будет каждый самокат ровно через одну секунду.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Входные данные</div><p>В первой строке задано одно целое число $$$n$$$ ($$$1 \le n \le 100$$$) — число самокатов в колонне.</p><p>В $$$i$$$-й из следующих $$$n$$$ строк задано одно целое число $$$a_i$$$ ($$$1 \le a_i \le 1000$$$; $$$a_1  \lt  a_2  \lt  \ldots  \lt  a_n$$$) — текущее расстояние от самоката $$$i$$$ до пункта Б в метрах.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Выходные данные</div><p>Выведите $$$n$$$ целых чисел — расстояния от самокатов $$$1, 2, \ldots, n$$$ до пункта Б в метрах через одну секунду.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Примеры</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Входные данные<div title="Copy" data-clipboard-target="#id006714106835789702" id="id006856972056678681" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006714106835789702">4
20
30
50
100
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Выходные данные<div title="Copy" data-clipboard-target="#id009827401964370929" id="id0025958313591596627" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009827401964370929">19
28
47
96
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Входные данные<div title="Copy" data-clipboard-target="#id0048819544081884103" id="id0009649209803647352" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0048819544081884103">5
1
2
3
4
5
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Выходные данные<div title="Copy" data-clipboard-target="#id009293283540019034" id="id0022811953308446686" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009293283540019034">0
1
2
3
4
</pre></div><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Входные данные<div title="Copy" data-clipboard-target="#id004700499841994348" id="id008418577730732723" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004700499841994348">8
5
9
10
15
17
18
19
22
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Выходные данные<div title="Copy" data-clipboard-target="#id003202918418105587" id="id003628044273462656" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003202918418105587">4
7
8
11
12
13
14
15
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Примечание</div><p>В первом тесте самокаты пока не мешают друг другу ехать, поэтому каждый самокат $$$i$$$ продвигается на $$$i$$$ метров в сторону пункта Б.</p><p>Во втором тесте самокаты уже выстроились в колонне на расстоянии $$$1$$$ метр друг от друга и вынуждены ехать со скоростью самого медленного самоката с номером $$$1$$$.</p></div>