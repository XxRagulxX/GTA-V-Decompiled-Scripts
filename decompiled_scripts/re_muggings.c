#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	BOOL bLocal_48 = 0;
	BOOL bLocal_49 = 0;
	BOOL bLocal_50 = 0;
	BOOL bLocal_51 = 0;
	BOOL bLocal_52 = 0;
	BOOL bLocal_53 = 0;
	BOOL bLocal_54 = 0;
	BOOL bLocal_55 = 0;
	BOOL bLocal_56 = 0;
	BOOL bLocal_57 = 0;
	BOOL bLocal_58 = 0;
	BOOL bLocal_59 = 0;
	Ped pedLocal_60 = 0;
	Ped pedLocal_61 = 0;
	Object obLocal_62 = 0;
	Blip blLocal_63 = 0;
	Blip blLocal_64 = 0;
	Blip blLocal_65 = 0;
	Blip blLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	float fLocal_73 = 0f;
	var uLocal_74 = 0;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	Hash hLocal_81 = 0;
	Hash hLocal_82 = 0;
	Hash hLocal_83 = 0;
	Hash hLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	char* sLocal_101 = 0;
	char* sLocal_102 = 0;
	char* sLocal_103 = 0;
	char* sLocal_104 = 0;
	char* sLocal_105 = 0;
	char* sLocal_106 = 0;
	char* sLocal_107 = 0;
	char* sLocal_108 = 0;
	char* sLocal_109 = 0;
	char* sLocal_110 = 0;
	char* sLocal_111 = 0;
	char* sLocal_112 = 0;
	char* sLocal_113 = 0;
	char* sLocal_114 = 0;
	char* sLocal_115 = 0;
	char* sLocal_116 = 0;
	char* sLocal_117 = 0;
	char* sLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	float fLocal_126 = 0f;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	Cam caLocal_130 = 0;
	BOOL bLocal_131 = 0;
	BOOL bLocal_132 = 0;
	BOOL bLocal_133 = 0;
	BOOL bLocal_134 = 0;
	BOOL bLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	ScrHandle shLocal_139 = 0;
	var uLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	BOOL bLocal_146 = 0;
	BOOL bLocal_147 = 0;
	BOOL bLocal_148 = 0;
	int iLocal_149 = 0;
	BOOL bLocal_150 = 0;
	BOOL bLocal_151 = 0;
	BOOL bLocal_152 = 0;
	BOOL bLocal_153 = 0;
	BOOL bLocal_154 = 0;
	BOOL bLocal_155 = 0;
	BOOL bLocal_156 = 0;
	BOOL bLocal_157 = 0;
	BOOL bLocal_158 = 0;
	BOOL bLocal_159 = 0;
	BOOL bLocal_160 = 0;
	BOOL bLocal_161 = 0;
	int iLocal_162 = 0;
	float fLocal_163 = 0f;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	BOOL bLocal_188 = 0;
	Pickup pkLocal_189 = 0;
	int iLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 16;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	char* sLocal_357 = 0;
	char* sLocal_358 = 0;
	char* sLocal_359 = 0;
	char* sLocal_360 = 0;
	char* sLocal_361 = 0;
	char* sLocal_362 = 0;
	char* sLocal_363 = 0;
	char* sLocal_364 = 0;
	char* sLocal_365 = 0;
	char* sLocal_366 = 0;
	char* sLocal_367 = 0;
	char* sLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	char* sLocal_375 = 0;
	char* sLocal_376 = 0;
	int iLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = -1;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 1000;
	var uLocal_388 = 1000;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 15;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 1;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void main() // Position - 0x0
{
	BOOL isPedInjured;

	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	iLocal_16 = 3;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	uLocal_89 = { -131.052f, -1627.0002f, 31.1755f };
	uLocal_92 = { 287.888f, -284.603f, 52.967f };
	uLocal_95 = { -319.66f, -832.28f, 31.61f };
	uLocal_98 = { 31f, -1019f, 28.5f };
	sLocal_118 = "";
	sLocal_357 = "RANDOM@MUGGING3";
	sLocal_358 = "pickup_object";
	sLocal_375 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_377 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (iLocal_46 == 5 || iLocal_46 == 12)
		{
			func_298(25, iLocal_88);
			func_280();
		}
		else
		{
			func_280();
		}
	}

	uLocal_120 = { uScriptParam_0.f_1[0 /*3*/] };
	func_279(&uLocal_391, 3);
	func_278();

	if (iLocal_88 == 1 && func_277(55) && !func_276(55))
		SCRIPT::TERMINATE_THIS_THREAD();

	if (func_235(uLocal_120, 25, iLocal_88, false, false))
		func_232(-1);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	isPedInjured = false;

	while (true)
	{
		SYSTEM::WAIT(0);
		func_229(&uLocal_391);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	
		func_228(blLocal_63, &uLocal_390);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_147)
		{
			switch (iLocal_44)
			{
				case 0:
					if (func_214())
					{
						PED::SET_CREATE_RANDOM_COPS(false);
						MISC::CLEAR_AREA_OF_VEHICLES(-127.9025f, -1574.0844f, 36.4128f, 10f, false, false, false, false, false, false, 0);
						bLocal_154 = true;
						iLocal_44 = 1;
					}
					else if (func_213())
					{
						func_280();
					}
					break;
			
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (shLocal_139 == 0)
							shLocal_139 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(EVENT_SHOCKING_MUGGING, uLocal_120, 0f);
					
						PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					
						switch (iLocal_46)
						{
							case 1:
								func_205();
								break;
						
							case 2:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							
								switch (iLocal_47)
								{
									case 0:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
									
										if (PED::IS_PED_INJURED(pedLocal_61) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_61, PLAYER::PLAYER_PED_ID(), false))
										{
											isPedInjured = PED::IS_PED_INJURED(pedLocal_60);
											!OBJECT::DOES_PICKUP_EXIST(pkLocal_189);
										
											if (isPedInjured == false && iLocal_88 == 1)
											{
												PED::SET_PED_TO_RAGDOLL(pedLocal_60, 500, 1000, 0, false, false, false);
												TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
												PED::SET_PED_KEEP_TASK(pedLocal_60, true);
												func_204(1);
												func_199();
											}
										}
										else
										{
											func_169();
										}
									
										if (iLocal_667 == 1 && bLocal_147 == true)
											iLocal_46 = 4;
										else if (bLocal_147)
											iLocal_47 = 2;
										break;
								
									case 2:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_168();
									
										if (bLocal_52 && !_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
											iLocal_47 = 4;
										break;
								
									case 4:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
									
										if (func_166())
											func_165();
									
										if (bLocal_153)
											iLocal_47 = 5;
									
										if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
											TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_61, 5000, 0, 2);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000);
											TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_a", 4f, -4f, -1, 0, 0, false, false, false);
											TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
											TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
											TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
										}
										break;
								
									case 5:
										func_162();
									
										if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
											{
												TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_61, 0);
												TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
												TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
												TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
												TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
											}
										}
										break;
								}
							
								if (func_161())
									iLocal_46 = 11;
							
								bLocal_147;
								func_160();
							
								if (iLocal_47 == 0)
								{
									if (func_158())
									{
										if (iLocal_141 == 4)
										{
											if (HUD::DOES_BLIP_EXIST(blLocal_64))
												HUD::REMOVE_BLIP(&blLocal_64);
										
											if (HUD::DOES_BLIP_EXIST(blLocal_63))
												HUD::REMOVE_BLIP(&blLocal_63);
										
											if (!HUD::DOES_BLIP_EXIST(blLocal_65))
												blLocal_65 = func_156(pkLocal_189);
										
											iLocal_46 = 4;
										}
										else
										{
											iLocal_46 = 3;
										}
									}
								
									if (func_155())
										func_154();
								}
							
								if (func_153())
								{
									func_152();
									func_151();
								
									if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_60, uLocal_182, 7f, 7f, 7f, false, true, 0))
									{
										iLocal_141 = 2;
										iLocal_46 = 3;
									}
									else
									{
										iLocal_46 = 4;
									}
								}
							
								if (bLocal_147)
								{
									if (!PED::IS_PED_IN_COMBAT(pedLocal_61, 0))
									{
										func_149(blLocal_64, &uLocal_140);
									}
									else if (HUD::DOES_BLIP_EXIST(blLocal_64))
									{
										if (HUD::GET_BLIP_COLOUR(blLocal_64) == 1)
										{
										}
										else
										{
											HUD::SET_BLIP_AS_FRIENDLY(blLocal_64, false);
											HUD::SET_BLIP_COLOUR(blLocal_64, 1);
										}
									}
								}
							
								if (func_148())
									iLocal_46 = 10;
								break;
						
							case 4:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_147(true);
							
								if (func_166())
								{
									func_165();
									func_162();
								}
							
								if (func_161())
									iLocal_46 = 11;
							
								func_139();
								break;
						
							case 5:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_147(true);
							
								if (!bLocal_150)
								{
									func_138(pedLocal_60, &uLocal_191);
									uLocal_191 = uLocal_191;
									func_137();
									func_136();
									func_135();
								
									if (func_134())
									{
										func_133();
										func_199();
									}
								
									if (_GET_PLAYER_CASH(_GET_CURRENT_PLAYER_CHARACTER()) < iLocal_190)
										iLocal_46 = 12;
								}
							
								func_61();
								break;
						
							case 10:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_60();
								break;
						
							case 3:
								func_59();
								break;
						
							case 11:
								func_58();
								break;
						
							case 6:
								if (func_161())
									iLocal_46 = 11;
							
								func_41();
								break;
						
							case 8:
								if (!PED::IS_PED_INJURED(pedLocal_60))
									if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
										iLocal_46 = 6;
									else
										func_280();
								break;
						
							case 9:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							
								if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
								{
									if (PED::IS_PED_INJURED(pedLocal_61))
									{
										if (HUD::DOES_BLIP_EXIST(blLocal_64))
											HUD::REMOVE_BLIP(&blLocal_64);
									
										if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
										{
											if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
												OBJECT::DELETE_OBJECT(&obLocal_62);
										
											func_40();
											bLocal_54 = true;
											func_139();
										}
									}
								}
								break;
						
							case 12:
								if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
									OBJECT::DELETE_OBJECT(&obLocal_62);
							
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								func_199();
								break;
						
							case 13:
								func_39();
								break;
						}
					}
				
					if (bLocal_58)
					{
						if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
								if (SYSTEM::VDIST(uLocal_182, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 150f)
									func_280();
					}
					else if (bLocal_147)
					{
						if (!PED::IS_PED_INJURED(pedLocal_61))
						{
							if (iLocal_46 != 6)
							{
								if (func_38(PLAYER::PLAYER_PED_ID(), pedLocal_61, true) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_61) || ENTITY::IS_ENTITY_OCCLUDED(pedLocal_61))
								{
									func_37(&uLocal_378, 0, false);
									iLocal_46 = 8;
								}
								else
								{
									func_4();
									func_3(blLocal_64, pedLocal_61, 100f, 1061158912, false);
								}
							}
						}
						else
						{
							func_37(&uLocal_378, 0, false);
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
						if (!PED::IS_PED_INJURED(pedLocal_60))
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), true))
								if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
									if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_62, pedLocal_60))
										ENTITY::DETACH_ENTITY(obLocal_62, true, true);
				
					if (bLocal_148)
					{
						if (!bLocal_161)
						{
							if (!ENTITY::IS_ENTITY_DEAD(pedLocal_61, false) && !ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_61, true), ENTITY::GET_ENTITY_COORDS(pedLocal_60, true), true) > 100f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_61, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 100f)
								{
									TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
									bLocal_161 = true;
								}
							}
						}
					}
				
					if (bLocal_147 && !bLocal_148)
					{
						if (!PED::IS_PED_INJURED(pedLocal_61))
						{
							if (iLocal_88 == 3)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_61, SCRIPT_TASK_SMART_FLEE_PED) != 1)
								{
									TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_61);
									TASK::TASK_SMART_FLEE_PED(pedLocal_61, pedLocal_60, 200f, -1, false, false);
									PED::FORCE_PED_MOTION_STATE(pedLocal_61, joaat("MotionState_Run"), true, 0, false);
									bLocal_148 = true;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_61, SCRIPT_TASK_SMART_FLEE_PED) != 1)
							{
								TASK::CLEAR_PED_SECONDARY_TASK(pedLocal_61);
								TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
								PED::FORCE_PED_MOTION_STATE(pedLocal_61, joaat("MotionState_Run"), true, 0, false);
								bLocal_148 = true;
							}
						
							if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_61, joaat("ends_in_run")))
							{
								TASK::TASK_SMART_FLEE_PED(pedLocal_61, pedLocal_60, 200f, -1, false, false);
								PED::FORCE_PED_MOTION_STATE(pedLocal_61, joaat("MotionState_Run"), true, 0, false);
								bLocal_148 = true;
							}
						
							if (iLocal_88 == 1 || iLocal_88 == 4)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_61, sLocal_357, sLocal_367, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_61, sLocal_357, sLocal_367) >= 0.922f)
									{
										TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
										PED::FORCE_PED_MOTION_STATE(pedLocal_61, joaat("MotionState_Run"), true, 0, false);
										bLocal_148 = true;
									}
								}
							
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_61, sLocal_357, sLocal_365, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_61, sLocal_357, sLocal_365) >= 0.922f)
									{
										TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
										PED::FORCE_PED_MOTION_STATE(pedLocal_61, joaat("MotionState_Run"), true, 0, false);
										bLocal_148 = true;
									}
								}
							}
						}
					}
				
					func_1();
					break;
			}
		}
		else
		{
			func_280();
		}
	}

	return;
}

void func_1() // Position - 0xA1F
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
		if (PED::IS_PED_INJURED(pedLocal_60))
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
				if (PED::IS_PED_INJURED(pedLocal_61))
					func_280();

	if (PED::IS_PED_INJURED(pedLocal_60))
		if (HUD::DOES_BLIP_EXIST(blLocal_63))
			HUD::REMOVE_BLIP(&blLocal_63);

	if (PED::IS_PED_INJURED(pedLocal_61))
		if (HUD::DOES_BLIP_EXIST(blLocal_64))
			HUD::REMOVE_BLIP(&blLocal_64);

	if (!bLocal_159)
	{
		if (PED::IS_PED_INJURED(pedLocal_61))
		{
			func_2(&uLocal_192, 1);
			bLocal_159 = true;
		}
	}

	if (!bLocal_160)
	{
		if (PED::IS_PED_INJURED(pedLocal_60))
		{
			func_2(&uLocal_192, 2);
			bLocal_160 = true;
		}
	}

	return;
}

void func_2(var uParam0, int iParam1) // Position - 0xAB1
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

void func_3(Blip blParam0, Ped pedParam1, float fParam2, int iParam3, BOOL bParam4) // Position - 0xACE
{
	int num;
	float distanceBetweenCoords;
	float num2;

	num2 = fParam2 * iParam3;

	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(pedParam1), false))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedParam1, true), true);
				
					if (distanceBetweenCoords >= num2 || bParam4)
					{
						num = SYSTEM::ROUND(255f * ((distanceBetweenCoords - num2) / (fParam2 - num2)));
					
						if (num <= 0)
							num = 0;
					
						if (num >= 255)
							num = 255;
					
						HUD::SET_BLIP_FLASHES(blParam0, true);
						HUD::SET_BLIP_ALPHA(blParam0, 255 - num);
					}
					else
					{
						HUD::SET_BLIP_FLASHES(blParam0, false);
						HUD::SET_BLIP_ALPHA(blParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(pedParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1)))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedParam1, true), true);
				
					if (distanceBetweenCoords >= num2 || bParam4)
					{
						num = SYSTEM::ROUND((255f * (distanceBetweenCoords - num2)) / (fParam2 - num2));
					
						if (num <= 0)
							num = 0;
					
						if (num >= 255)
							num = 255;
					
						HUD::SET_BLIP_FLASHES(blParam0, true);
						HUD::SET_BLIP_ALPHA(blParam0, 255 - num);
					}
					else
					{
						HUD::SET_BLIP_FLASHES(blParam0, false);
						HUD::SET_BLIP_ALPHA(blParam0, 255);
					}
				}
			}
		}
	}

	return;
}

void func_4() // Position - 0xC27
{
	if (!PED::IS_PED_INJURED(pedLocal_61) || !bLocal_131)
		func_5(&uLocal_378, pedLocal_61, 0, 0, true, true, true);
	else
		func_37(&uLocal_378, 0, false);

	return;
}

void func_5(var uParam0, Ped pedParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC5C
{
	func_6(uParam0, pedParam1, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_6(var uParam0, Ped pedParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC76
{
	func_7(uParam0, pedParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_7(var uParam0, Ped pedParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0xC93
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		func_37(uParam0, 0, false);

	uParam0->f_6 = 2;
	func_8(uParam0, pedParam1, fParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_8(var uParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4, const char* sParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0xCCB
{
	const char* string2;
	BOOL flag;

	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	string2 = sParam5;

	if (MISC::IS_STRING_NULL(string2))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			string2 = "CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/;
		else
			string2 = "FM_IHELP_HNT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.*/;

	if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
		func_35();

	if (func_34(pedParam1) && ENTITY::IS_ENTITY_VISIBLE(pedParam1))
	{
		flag = false;
	
		if (ENTITY::IS_ENTITY_A_PED(pedParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1), true);
		
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(pedParam1));
		
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(pedParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(pedParam1));
		
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(pedParam1)))
				flag = true;
		}
	
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_29(uParam0, bParam7, bParam9, false))
				func_25(uParam0, pedParam1, uParam2, iParam6);
		
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_13(string2))
				{
					if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
						{
							if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
							{
								_DISPLAY_HELP_TEXT(string2, -1);
								uParam0->f_3 = string2;
							
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, string2))
									func_11(true);
							}
						}
					}
				}
			}
			else if (func_13(string2))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam1) && flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
					{
						if (!_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(string2))
						{
							_DISPLAY_HELP_TEXT(string2, -1);
							uParam0->f_3 = string2;
						
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/, string2))
								func_11(true);
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
				if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam5))
					HUD::CLEAR_HELP(true);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
						func_37(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
						func_37(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
						func_37(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
						func_37(uParam0, string2, true);
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
						func_37(uParam0, string2, true);
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
					func_37(uParam0, string2, true);
		
			if (!func_29(uParam0, bParam7, bParam9, false))
				if (!*uParam0 && !uParam0->f_1 && !func_10(uParam0))
					func_9(uParam0);
		}
	}
	else
	{
		func_37(uParam0, string2, false);
	}

	return;
}

void func_9(var uParam0) // Position - 0x1034
{
	if (func_34(PLAYER::PLAYER_PED_ID()))
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());

	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
	
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}

	uParam0->f_2 = -1;
	*uParam0 = 1;
	return;
}

BOOL func_10(var uParam0) // Position - 0x109D
{
	int num;

	if (uParam0->f_2 > 0)
	{
		num = uParam0->f_10 / 2;
	
		if (uParam0->f_2 + num > MISC::GET_GAME_TIMER())
			return true;
	}

	return false;
}

int func_11(BOOL bParam0) // Position - 0x10C8
{
	switch (Global_43377)
	{
		case 0:
		case 3:
			if (bParam0)
				Global_113810.f_10052.f_100 = Global_113810.f_10052.f_100 + 1;
		
			return Global_113810.f_10052.f_100;
	
		case 4:
			if (bParam0)
				Global_113810.f_10052.f_101 = Global_113810.f_10052.f_101 + 1;
		
			return Global_113810.f_10052.f_101;
	
		case 5:
		case 15:
			if (bParam0)
				Global_113810.f_10052.f_102 = Global_113810.f_10052.f_102 + 1;
		
			return Global_113810.f_10052.f_102;
	
		default:
			break;
	}

	return 3;
}

void _DISPLAY_HELP_TEXT(const char* text, int iParam1) // Position - 0x1172
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(text);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_13(const char* sParam0) // Position - 0x1189
{
	if (!func_14(true, true, false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/))
			HUD::CLEAR_HELP(true);
	
		return false;
	}

	switch (Global_43377)
	{
		case 0:
		case 3:
			if (func_11(false) < 3)
				return true;
			break;
	
		case 4:
			if (func_11(false) < 1)
				return true;
			break;
	
		case 5:
		case 15:
			if (func_11(false) < 1)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_14(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1221
{
	Vehicle vehiclePedIsIn;
	int seatIndex;

	if (bParam0)
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return false;

	if (bParam2)
		return true;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return false;

	if (func_24(0))
		return false;

	if (func_23())
		return false;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return false;

	if (Global_75816)
		return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
		return false;

	if (Global_60666)
		return false;

	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
					return false;
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
				return false;
		
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
				return false;
		}
	}

	if (func_22() || func_21(*Global_4718592.f_171044) || func_20())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			seatIndex = _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_TURRET_SEAT(vehiclePedIsIn, seatIndex) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("apc") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("akula") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("riot2") && seatIndex == 0 && func_18(vehiclePedIsIn, 10) && VEHICLE::GET_VEHICLE_MOD(vehiclePedIsIn, 10) != -1)
				return false;
		}
	}

	if (Global_1962809)
		return false;

	if (func_15(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_15(Player plParam0) // Position - 0x147A
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2657704[plParam0 /*463*/].f_321.f_7 != -1;
		else if (Global_1575063 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2657704[plParam0 /*463*/].f_321.f_7 != -1;

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x14E0
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672524.f_3)
					return Global_2672524.f_2;
				else if (Global_2657704[player /*463*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x1540
{
	return -1;
}

BOOL func_18(Vehicle veParam0, int iParam1) // Position - 0x1549
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
			
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) > 0)
						return true;
					break;
			}
		}
	}

	return false;
}

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x15AB
{
	Vehicle vehiclePedIsIn;
	int vehicleModelNumberOfSeats;
	int i;
	int seatIndex;

	if (!PED::IS_PED_INJURED(ped))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(ped, includeLastVehicle))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(ped, includeLastVehicle);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
			
				if (vehicleModelNumberOfSeats == 1)
				{
					seatIndex = -1;
					return seatIndex;
				}
			
				for (i = 0; i < vehicleModelNumberOfSeats; i = i + 1)
				{
					seatIndex = i - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false) == ped)
							return seatIndex;
				}
			}
		}
	}

	return seatIndex;
}

BOOL func_20() // Position - 0x1630
{
	return Global_2683883.f_19;
}

BOOL func_21(int iParam0) // Position - 0x163E
{
	return iParam0 == 51;
}

BOOL func_22() // Position - 0x164B
{
	return Global_2683883.f_18;
}

BOOL func_23() // Position - 0x1659
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

BOOL func_24(int iParam0) // Position - 0x166E
{
	if (iParam0 == 1)
		if (Global_20500.f_1 > 3)
			if (IS_BIT_SET(Global_8370, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20500.f_1 > 3)
		return true;

	return false;
}

void func_25(var uParam0, Ped pedParam1, Vector3 vParam2, var uParam3, var uParam4, int iParam5) // Position - 0x16C5
{
	Ped pedIndexFromEntityIndex;
	int easeInTime;
	int easeOutTime;
	eScriptLookAtFlags flags;
	int num;

	if (Global_1581988 == 1)
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1, false))
		func_37(uParam0, 0, false);

	if (func_28(vParam2, 0f, 0f, 0f, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(pedParam1))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1);
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(pedIndexFromEntityIndex, false))
				if (PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex))
					if (!func_26())
						vParam2 = { 0f, 0f, 1f };
				else if (PED::IS_PED_MALE(pedIndexFromEntityIndex))
					vParam2 = { 0f, 0f, 1f };
		}
	}

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	easeInTime = uParam0->f_9;
	easeOutTime = uParam0->f_10;

	if (iParam5 == 1726668277)
	{
		if (easeInTime < 1500)
			easeInTime = 1500;
	
		if (easeOutTime < 1500)
			easeOutTime = 1500;
	}

	CAM::SET_GAMEPLAY_ENTITY_HINT(pedParam1, vParam2, true, -1, easeInTime, easeOutTime, iParam5);
	flags = SLF_WHILE_NOT_IN_FOV;
	num = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam1, -1, flags, num);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
	return;
}

BOOL func_26() // Position - 0x17D5
{
	return func_27(PLAYER::PLAYER_ID());
}

BOOL func_27(Player plParam0) // Position - 0x17E5
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_28(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x1804
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_29(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x184B
{
	if (uParam0->f_1)
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
		
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_32(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_33(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
		
			if (func_10(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
	
		case 1:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_33(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_32(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_33(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
	
		case 2:
			if (uParam0->f_6 == 0)
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					if (!func_33(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (!func_32(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 1)
				if (!func_32(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 2)
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					uParam0->f_5 = 0;
				else if (!func_33(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 > 500)
				if (uParam0->f_6 == 0)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						if (func_31(bParam1, bParam2, bParam3))
							uParam0->f_5 = 0;
					else if (func_30(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 1)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_30(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 2)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
						uParam0->f_5 = 0;
					else if (func_31(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
			break;
	
		case 4:
			if (!func_10(uParam0))
				uParam0->f_5 = 0;
			break;
	}

	if (!func_14(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}

	if (uParam0->f_7)
	{
		func_35();
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_30(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1BB7
{
	if (!func_14(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM))
				return true;
		}
	}

	return false;
}

BOOL func_31(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1C09
{
	if (!func_14(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_32(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1C52
{
	if (!func_14(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_116)
				return true;
		}
	}

	return false;
}

BOOL func_33(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1CB1
{
	if (!func_14(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_34(Ped pedParam0) // Position - 0x1D07
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(pedParam0), false))
				return true;
		else if (ENTITY::IS_ENTITY_A_PED(pedParam0))
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
				return true;
		else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam0))
			return true;

	return false;
}

void func_35() // Position - 0x1D62
{
	MISC::SET_BIT(&Global_8371, 4);
	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* message) // Position - 0x1D72
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_37(var uParam0, const char* sParam1, BOOL bParam2) // Position - 0x1D85
{
	const char* str;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (IS_BIT_SET(Global_2794162.f_4697, 26))
			return;

	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
	
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	str = sParam1;

	if (MISC::IS_STRING_NULL(str))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			str = "CMN_HINT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.*/;
		else
			str = "FM_IHELP_HNT" /*~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.*/;

	if (!MISC::IS_STRING_NULL(uParam0->f_3))
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0->f_3))
			HUD::CLEAR_HELP(true);

	if (!MISC::IS_STRING_NULL(str))
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(str))
			HUD::CLEAR_HELP(true);

	return;
}

float func_38(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x1E5D
{
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1, false))
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, true) };
	else
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}

void func_39() // Position - 0x1EBB
{
	func_280();
	return;
}

void func_40() // Position - 0x1EC7
{
	if (!OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
	{
		if (PED::IS_PED_INJURED(pedLocal_61))
			uLocal_182 = { PED::GET_DEAD_PED_PICKUP_COORDS(pedLocal_61, 1067030938, 1069547520) };
		else
			uLocal_182 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_61, true), 1067030938, 1069547520) };
	
		pkLocal_189 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_WALLET"), uLocal_182, iLocal_142, iLocal_190, true, hLocal_83);
		blLocal_65 = func_156(pkLocal_189);
		func_37(&uLocal_378, 0, false);
		bLocal_58 = true;
	}

	return;
}

void func_41() // Position - 0x1F3C
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "flee_backward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "flee_forward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
	
		_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_108, 4, 0, 0, 0);
		bLocal_152 = true;
		PED::SET_PED_KEEP_TASK(pedLocal_60, true);
		SYSTEM::WAIT(0);
		func_280();
	}

	return;
}

BOOL _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2019
{
	func_57(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_21852 = 0;
	Global_21854 = 0;
	Global_21859 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_2883585 = 0;
	return func_43(sParam2, iParam3, false);
}

BOOL func_43(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x2067
{
	Global_21846 = 0;

	if (Global_21845 == 0 || Global_21847 == 2)
	{
		if (Global_21845 != 0)
		{
			if (iParam1 > Global_21847)
			{
				if (Global_21852 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20500.f_1 = 3;
					Global_21845 = 0;
					Global_21846 = 1;
					Global_21898 = 0;
					Global_21841 = 0;
					Global_21842 = 0;
					Global_21856 = 0;
					Global_21855 = false;
					Global_20499 = 0;
				}
				else
				{
					func_56();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			return 0;
	
		if (func_55(8, -1))
			return 0;
	
		Global_21921 = { Global_21915 };
		func_54();
		Global_21134 = { Global_21299 };
		Global_21851 = Global_21852;
		Global_21858 = Global_21859;
		Global_2883586 = Global_2883585;
		Global_21860 = { Global_21876 };
		Global_21853 = Global_21854;
		Global_22835 = Global_22836;
		Global_22843 = { Global_22849 };
		Global_22837 = Global_22838;
		Global_22839 = Global_22840;
		Global_22841 = Global_22842;
		Global_21464.f_370 = Global_22834;
		Global_21464.f_368 = Global_22832;
		Global_21464.f_369 = Global_22833;
		Global_21841 = Global_21842;
	
		if (Global_21851)
		{
			MISC::CLEAR_BIT(&Global_8370, 20);
			MISC::CLEAR_BIT(&Global_8371, 17);
			MISC::CLEAR_BIT(&Global_8372, 0);
		
			if (bParam2)
			{
				_UPDATE_CURRENT_PLAYER_CHARACTER();
			
				if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_20500.f_1 > 3)
					return 0;
			}
		
			if (Global_20466 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_51())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_78689)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						return 0;
				
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						return 0;
				}
			}
		
			if (func_50())
			{
				return 0;
			}
			else
			{
				switch (Global_20500.f_1)
				{
					case 7:
						return 0;
				
					case 8:
						return 0;
				
					case 9:
						break;
				
					case 10:
						break;
				
					default:
						break;
				}
			
				if (IS_BIT_SET(Global_8370, 9))
					return 0;
			}
		
			func_49();
			Global_21855 = bParam2;
		}
	
		Global_21847 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_48();
		func_44();
		return 1;
	}

	if (Global_21845 == 5)
		return 0;

	if (iParam1 < Global_21847 || iParam1 == Global_21847)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_56();
	}

	return 0;
}

void func_44() // Position - 0x2335
{
	if (!func_45())
		return;

	if (Global_21851)
	{
		TEXT_LABEL_COPY(&(Global_1978312.f_1), { Global_21464 }, 4);
		Global_1978312 = Global_7685;
		Global_1978312.f_6 = Global_21855;
	}

	return;
}

BOOL func_45() // Position - 0x236C
{
	if (!Global_262145.f_29085)
		return false;

	if (!Global_78689)
		return false;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return false;

	if (func_46(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_46(Player plParam0) // Position - 0x23CF
{
	return func_47(plParam0, 20);
}

BOOL func_47(Player plParam0, int iParam1) // Position - 0x23DF
{
	return IS_BIT_SET(Global_1895156[plParam0 /*609*/].f_10.f_4, iParam1);
}

void func_48() // Position - 0x23F7
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_20713[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21845 = 1;
	return;
}

void func_49() // Position - 0x2427
{
	Global_21898 = Global_21897;
	Global_21892 = Global_21893;
	Global_21939 = { Global_21927 };
	Global_21945 = { Global_21933 };
	Global_21900 = Global_21899;
	Global_21969 = { Global_21951 };
	Global_21975 = { Global_21957 };
	Global_21981 = { Global_21963 };
	Global_21987 = { Global_21993 };
	Global_7685 = Global_7686;
	Global_7687 = Global_7688;
	Global_21856 = Global_21857;
	Global_21858 = Global_21859;
	Global_21860 = { Global_21876 };
	Global_21849 = Global_21850;
	Global_22861 = 0;
	Global_21894 = 0;
	Global_21895 = 0;
	MISC::CLEAR_BIT(&Global_8371, 16);
	return;
}

BOOL func_50() // Position - 0x24BC
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
		return true;

	return false;
}

BOOL func_51() // Position - 0x24E3
{
	int num;
	int weaponHash;

	if (Global_78689)
	{
		num = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (weaponHash == joaat("WEAPON_SNIPERRIFLE") || weaponHash == joaat("WEAPON_HEAVYSNIPER") || weaponHash == joaat("WEAPON_REMOTESNIPER"))
				num = 1;
	
		if (CAM::IS_AIM_CAM_ACTIVE() && num == 1)
			return true;
		else
			return false;
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
			return true;
		else
			return false;

	return true;
}

void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x257C
{
	if (func_53(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[0 /*29*/])
				Global_20500 = CHAR_MICHAEL;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[1 /*29*/])
				Global_20500 = CHAR_FRANKLIN;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[2 /*29*/])
				Global_20500 = CHAR_TREVOR;
			else
				Global_20500 = CHAR_MICHAEL;
	}
	else
	{
		Global_20500 = _GET_CURRENT_PLAYER_CHARACTER();
	
		if (Global_20500 == _CHAR_NULL)
			Global_20500 = CHAR_MULTIPLAYER;
	
		if (Global_78689)
			Global_20500 = CHAR_MULTIPLAYER;
	
		if (Global_20500 > CHAR_MULTIPLAYER)
			Global_20500 = CHAR_MULTIPLAYER;
	}

	return;
}

BOOL func_53(int iParam0) // Position - 0x261E
{
	return Global_43377 == iParam0;
}

void func_54() // Position - 0x262C
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21134[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21134[i /*10*/].f_1), "", 24);
		Global_21134[i /*10*/].f_7 = 0;
		Global_21134[i /*10*/].f_8 = 0;
	}

	Global_21134.f_161 = -99;
	Global_21134.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_55(int iParam0, int iParam1) // Position - 0x2682
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1654054.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1654054.f_1048, iParam0);
}

void func_56() // Position - 0x26BA
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1 == 9 || Global_20499 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
		Global_20500.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}

	return;
}

void func_57(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2711
{
	Global_21299 = { *uParam0 };
	Global_7686 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_21915, sParam2, 24);
	Global_22834 = iParam5;

	if (iParam3 == 0)
	{
		Global_22832 = 1;
		Global_22830 = 0;
	}
	else
	{
		Global_22832 = 0;
		Global_22830 = 1;
	}

	if (iParam4 == 0)
	{
		Global_22833 = 1;
		Global_22831 = 0;
	}
	else
	{
		Global_22833 = 0;
		Global_22831 = 1;
	}

	return;
}

void func_58() // Position - 0x2767
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		TASK::CLEAR_PED_TASKS(pedLocal_60);
		TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_60, true);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
			OBJECT::DELETE_OBJECT(&obLocal_62);
	
		SYSTEM::WAIT(0);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_63))
			HUD::REMOVE_BLIP(&blLocal_63);
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
	}

	if (PED::IS_PED_INJURED(pedLocal_61) || PED::IS_PED_INJURED(pedLocal_60))
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_64))
			HUD::REMOVE_BLIP(&blLocal_64);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_63))
			HUD::REMOVE_BLIP(&blLocal_63);
	
		if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
		{
			if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
			{
				bLocal_54 = true;
				func_139();
			}
			else
			{
				func_147(false);
				func_280();
			}
		}
		else
		{
			func_280();
		}
	}

	return;
}

void func_59() // Position - 0x2820
{
	BOOL flag;

	func_139();

	if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
		OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189);

	if (iLocal_141 == 1)
	{
		if (!bLocal_49)
		{
			if (!PED::IS_PED_INJURED(pedLocal_61))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_61);
				TASK::TASK_COMBAT_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(pedLocal_61, true);
			}
		
			if (!PED::IS_PED_INJURED(pedLocal_60))
			{
				if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_60);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(pkLocal_189), 1f, 20000, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
					}
				}
			}
		
			bLocal_49 = true;
		}
	}

	if (iLocal_141 == 2)
	{
		if (!bLocal_49)
		{
			if (!PED::IS_PED_INJURED(pedLocal_61))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_61);
				TASK::TASK_COMBAT_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(pedLocal_61, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_61, false, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_61);
			}
		
			if (!PED::IS_PED_INJURED(pedLocal_60))
			{
				if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_60, OBJECT::GET_PICKUP_COORDS(pkLocal_189), 10f, 10f, 10f, false, true, 0))
						{
							if (iLocal_88 == 3)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "handsup_standing_base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "handsup_standing_exit", 3))
								{
									TASK::CLEAR_PED_TASKS(pedLocal_60);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(pkLocal_189), 1f, 20000, 0.25f, 0, 1193033728);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
									bLocal_49 = true;
								}
							}
							else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, sLocal_368, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, sLocal_364, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, sLocal_366, 3))
							{
								TASK::CLEAR_PED_TASKS(pedLocal_60);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(pkLocal_189), 1f, 20000, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
								bLocal_49 = true;
							}
						}
						else
						{
							flag = true;
						}
					}
					else
					{
						flag = true;
					}
				}
				else
				{
					flag = true;
				}
			
				if (flag)
				{
					if (iLocal_88 == 3)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "handsup_standing_base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "handsup_standing_exit", 3))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_60);
							TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							PED::SET_PED_KEEP_TASK(pedLocal_60, true);
						
							if (HUD::DOES_BLIP_EXIST(blLocal_63))
								HUD::REMOVE_BLIP(&blLocal_63);
						
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
							bLocal_49 = true;
							iLocal_46 = 9;
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, sLocal_368, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, sLocal_364, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, sLocal_366, 3))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_60);
						TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_60, true);
					
						if (HUD::DOES_BLIP_EXIST(blLocal_63))
							HUD::REMOVE_BLIP(&blLocal_63);
					
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
						bLocal_49 = true;
						iLocal_46 = 9;
					}
				}
			}
		}
	}

	if (iLocal_141 == 3)
	{
		if (!bLocal_49)
		{
			if (!PED::IS_PED_INJURED(pedLocal_61))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_61);
				TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				PED::SET_PED_KEEP_TASK(pedLocal_61, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_61, false, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_61);
			}
		
			if (!PED::IS_PED_INJURED(pedLocal_60))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_60);
				TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				PED::SET_PED_KEEP_TASK(pedLocal_60, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
			}
		
			bLocal_54 = true;
			bLocal_49 = true;
		}
	}

	if (iLocal_141 == 1 || iLocal_141 == 2)
	{
		if (!PED::IS_PED_INJURED(pedLocal_60))
		{
			if (bLocal_49)
			{
				if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_358, "pickup_low", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_60, sLocal_358, "pickup_low") > 0.5f)
							{
								if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
								{
									if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
									{
										_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_107, 4, 0, 0, 0);
										OBJECT::REMOVE_PICKUP(pkLocal_189);
										bLocal_50 = true;
									}
								}
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
						{
							TASK::CLEAR_PED_TASKS(pedLocal_60);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
							TASK::TASK_PLAY_ANIM(0, sLocal_358, "pickup_low", 1090519040, -1056964608, -1, 0, 0, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
							PED::SET_PED_KEEP_TASK(pedLocal_60, true);
						}
					}
					else if (bLocal_50)
					{
						PED::SET_PED_MONEY(pedLocal_60, iLocal_190);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
						func_204(3);
						func_199();
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_60, true);
					
						if (HUD::DOES_BLIP_EXIST(blLocal_63))
							HUD::REMOVE_BLIP(&blLocal_63);
					
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
						bLocal_49 = true;
						iLocal_46 = 12;
					}
				}
				else if (bLocal_50)
				{
					PED::SET_PED_MONEY(pedLocal_60, iLocal_190);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
					func_204(3);
					func_199();
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_60, true);
				
					if (HUD::DOES_BLIP_EXIST(blLocal_63))
						HUD::REMOVE_BLIP(&blLocal_63);
				
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
					bLocal_49 = true;
					iLocal_46 = 12;
				}
			}
		}
		else
		{
			iLocal_46 = 9;
		}
	}

	return;
}

void func_60() // Position - 0x2D53
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		TASK::CLEAR_PED_TASKS(pedLocal_60);
		TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_60, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
	}

	return;
}

void func_61() // Position - 0x2D8A
{
	Vehicle playersLastVehicle;
	Vector3 animInitialOffsetPosition;
	var minimum;
	var maximum;
	Vector3 vector;
	float num;
	float num2;
	var entityCoords;
	int num3;
	int num4;

	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (!bLocal_150)
		{
			if (bLocal_151)
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				num3 = 1;
			
				if (iLocal_88 == 1)
					if (entityCoords.f_2 > 33.5f)
						num3 = 0;
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 5f, 5f, 5f, false, true, 0) && num3 == 1)
				{
					if (func_124(2))
						HUD::CLEAR_HELP(true);
				
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (func_123(true, false, true))
						{
							if (!func_122())
							{
								if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
								{
									func_113(true, true, true, false, false, false, false);
								
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										while (!func_111(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fLocal_75, 1, 1056964608, false, true, false) || _CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
										{
											HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
											SYSTEM::WAIT(0);
										}
									
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
								
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								
									if (!PED::IS_PED_INJURED(pedLocal_60))
										PED::SET_PED_CAN_RAGDOLL(pedLocal_60, false);
								
									HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
									EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
									EVENT::REMOVE_SHOCKING_EVENT(shLocal_139);
								
									if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
										func_109();
								
									bLocal_150 = true;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
				}
				else
				{
					func_107(ENTITY::GET_ENTITY_COORDS(pedLocal_60, true), &uLocal_74, &fLocal_75);
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 15f, 15f, 15f, false, true, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
			
				if (iLocal_45 == 2)
					TASK::TASK_PLAY_ANIM(0, sLocal_375, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, false, false, false);
			
				TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
				PED::FORCE_PED_MOTION_STATE(pedLocal_60, joaat("MotionState_Walk"), false, 0, false);
				bLocal_151 = true;
			}
		}
	
		if (bLocal_150)
		{
			switch (iLocal_149)
			{
				case 0:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!PED::IS_PED_INJURED(pedLocal_60))
						{
							func_104(pedLocal_60, &uLocal_123, &fLocal_126, sLocal_359, sLocal_361);
						
							if (iLocal_88 == 1)
								if (fLocal_126.f_2 > 225f && fLocal_126.f_2 < 265f)
									if (fLocal_126.f_2 < 245f)
										fLocal_126.f_2 = 225f;
									else
										fLocal_126.f_2 = 265f;
								else if (fLocal_126.f_2 > 45f && fLocal_126.f_2 < 85f)
									if (fLocal_126.f_2 < 65f)
										fLocal_126.f_2 = 45f;
									else
										fLocal_126.f_2 = 85f;
						
							uLocal_123.f_2 = uLocal_123.f_2 + 2f;
							MISC::GET_GROUND_Z_FOR_3D_COORD(uLocal_123, &(uLocal_123.f_2), false, false);
							animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_359, sLocal_361, uLocal_123, fLocal_126, 0f, 2) };
							vector = { animInitialOffsetPosition - uLocal_123 };
							vector.f_2 = 0f;
							num = SYSTEM::VMAG(vector);
							MISC::GET_GROUND_Z_FOR_3D_COORD(animInitialOffsetPosition, &(animInitialOffsetPosition.f_2), false, false);
							num2 = uLocal_123.f_2 - animInitialOffsetPosition.f_2;
							fLocal_126 = MISC::ATAN2(num2, num);
						
							if (fLocal_126 > 30f || fLocal_126 < -30f)
								fLocal_126 = 0f;
						}
					
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
							{
								playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(playersLastVehicle), &minimum, &maximum);
							
								if (ENTITY::IS_ENTITY_AT_COORD(playersLastVehicle, uLocal_123, maximum.f_1 + 1.5f, maximum.f_1 + 1.5f, 3f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(playersLastVehicle, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_359, sLocal_361, uLocal_123, fLocal_126, 0, 2), maximum.f_1 + 1f, maximum.f_1 + 1f, 3f, false, true, 0))
								{
									if (iLocal_88 == 1)
									{
										if (fLocal_126.f_2 > 40f && fLocal_126.f_2 < 220f)
										{
											uLocal_78 = { -148.3897f, -1647.2146f, 31.5867f };
											fLocal_77 = 331.9427f;
										}
										else
										{
											uLocal_78 = { -129.5632f, -1622.2823f, 31.1122f };
											fLocal_77 = 148.9075f;
										}
									}
									else if (iLocal_88 == 3)
									{
										if (fLocal_126.f_2 > 160f && fLocal_126.f_2 < 340f)
										{
											uLocal_78 = { -319.709f, -837.0066f, 30.449f };
											fLocal_77 = 61.7986f;
										}
										else
										{
											uLocal_78 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_77 = 269.6216f;
										}
									}
									else if (iLocal_88 == 4)
									{
										if (fLocal_126.f_2 > 240f || fLocal_126.f_2 < 60f)
										{
											uLocal_78 = { 37.222f, -1005.0401f, 28.4648f };
											fLocal_77 = 156.7986f;
										}
										else
										{
											uLocal_78 = { 29.9887f, -1033.1838f, 28.3794f };
											fLocal_77 = 344.6216f;
										}
									}
									else
									{
										fLocal_77 = ENTITY::GET_ENTITY_HEADING(playersLastVehicle);
										uLocal_78 = { func_102(uLocal_123, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_359, sLocal_361, uLocal_123, fLocal_126, 0, 2)) };
									}
								
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
									{
										ENTITY::SET_ENTITY_COORDS(playersLastVehicle, uLocal_78, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fLocal_77);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(playersLastVehicle, true);
									}
								}
							}
						}
					
						MISC::CLEAR_AREA_OF_OBJECTS(uLocal_123, 20f, 2);
						MISC::CLEAR_AREA_OF_PROJECTILES(uLocal_123, 20f, 0);
						MISC::CLEAR_AREA(uLocal_123, 2f, true, true, false, false);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
						obLocal_62 = OBJECT::CREATE_OBJECT(hLocal_83, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, true, false);
					
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_62, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					
						iLocal_129 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_123, fLocal_126, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_129, false);
						caLocal_130 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(caLocal_130, iLocal_129, sLocal_362, sLocal_359);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_129, sLocal_359, sLocal_360, 1000f, -8f, 0, 0, 1148846080, 0);
					
						if (!PED::IS_PED_INJURED(pedLocal_60))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_60);
							TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_60, iLocal_129, sLocal_359, sLocal_361, 1000f, -8f, 0, 0, 1148846080, 0);
						}
					
						CAM::SET_CAM_ACTIVE(caLocal_130, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_113, 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_149 = iLocal_149 + 1;
					}
				
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
			
				case 1:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_129) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_129) > 0.9f || func_100(1000))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_CAM_ACTIVE(caLocal_130, false);
						CAM::DESTROY_CAM(caLocal_130, false);
						func_99();
					
						if (!PED::IS_PED_INJURED(pedLocal_60))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_60);
							PED::SET_PED_MONEY(pedLocal_60, iLocal_190 - (iLocal_190 / 10));
							animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_359, sLocal_361, uLocal_123, fLocal_126, 1f, 2) };
							MISC::GET_GROUND_Z_FOR_3D_COORD(animInitialOffsetPosition, &(animInitialOffsetPosition.f_2), false, false);
							ENTITY::SET_ENTITY_COORDS(pedLocal_60, animInitialOffsetPosition, true, false, false, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_60, false);
							animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_359, sLocal_361, uLocal_123, fLocal_126, 1f, 2) };
							ENTITY::SET_ENTITY_HEADING(pedLocal_60, animInitialOffsetPosition.f_2);
						
							if (iLocal_88 == 4)
							{
								if (func_98(animInitialOffsetPosition.f_2, 0f, 90f))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(pedLocal_60), 1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 58.803f, -1067.7108f, 28.4411f, 1f, 20000, 1048576000, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(pedLocal_60), 1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
								}
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
								TASK::TASK_WANDER_STANDARD(0, animInitialOffsetPosition.f_2, 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
								TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
							}
						
							PED::SET_PED_MOVEMENT_CLIPSET(pedLocal_60, sLocal_376, 1048576000);
							PED::FORCE_PED_MOTION_STATE(pedLocal_60, joaat("MotionState_Walk"), true, 0, false);
							PED::SET_PED_KEEP_TASK(pedLocal_60, true);
						}
					
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
							OBJECT::DELETE_OBJECT(&obLocal_62);
					
						if (!PED::IS_PED_INJURED(pedLocal_60))
						{
							PED::SET_PED_MONEY(pedLocal_60, iLocal_190 - (iLocal_190 / 10));
							PED::SET_PED_CAN_RAGDOLL(pedLocal_60, true);
						}
					
						num4 = iLocal_190 / 100;
						num4 = num4 * 90;
						SYSTEM::WAIT(0);
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, 0);
						func_64(_GET_CURRENT_PLAYER_CHARACTER(), 1, num4);
						func_63(joaat("RC_WALLETS_RETURNED"), 1);
						func_204(3);
						func_199();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("detach")))
					{
						if (!PED::IS_PED_INJURED(pedLocal_60) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_62, PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::DETACH_ENTITY(obLocal_62, false, true);
							
								if (PED::IS_PED_MALE(pedLocal_60))
									ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_62, pedLocal_60, PED::GET_PED_BONE_INDEX(pedLocal_60, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								else
									ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_62, pedLocal_60, PED::GET_PED_BONE_INDEX(pedLocal_60, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							
								if (!bLocal_59)
									if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_107, 4, 0, 0, 0) || func_62())
										bLocal_59 = true;
							}
						}
					}
					else if (!bLocal_59)
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_107, 4, 0, 0, 0) || func_62())
							bLocal_59 = true;
					}
				
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
			}
		}
	}
	else
	{
		func_280();
	}

	return;
}

BOOL func_62() // Position - 0x36EF
{
	if (Global_21845 == 4)
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			return 1;
		else
			return 0;

	return 0;
}

void func_63(Hash hParam0, int iParam1) // Position - 0x3714
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

int func_64(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x3737
{
	if (func_97(echParam0) == 3)
		return 0;

	if (func_97(echParam0) == 4)
		return 0;

	return func_65(func_97(echParam0), 0, iParam1, iParam2, false);
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x376B
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_96();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_95(99, 1);
					func_63(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 1:
					func_63(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 2:
					func_63(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
		
			func_80(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_77(5))
					{
						num = 0.9f;
						num2 = 5;
					}
					break;
			
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
				
					if (func_77(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
			
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_63(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 1:
							func_63(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 2:
							func_63(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
			
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
					
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
						
							if (func_77(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
					
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_63(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 1:
									func_63(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 2:
									func_63(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
						
							func_76(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_95(95, iParam3);
					break;
			
				case 1:
					func_95(97, iParam3);
					break;
			
				case 2:
					func_95(96, iParam3);
					break;
			}
		
			func_95(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = SYSTEM::FLOOR(num * SYSTEM::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_68(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_68(num2);
	}

	num6 = Global_60659[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_60659[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_60659[num3] = 2147483647;
				else
					Global_60659[num3] = Global_60659[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_63(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 1:
					func_63(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 2:
					func_63(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_60659[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_60659[num3];
			Global_60659[num3] = Global_60659[num3] - iParam3;
		
			if (bParam4)
				num5 = num4;
			break;
	}

	if (iParam2 == 1)
	{
		num5 > 20;
	}
	else
	{
		Global_113810.f_20567.f_233[num3 /*69*/].f_2[Global_113810.f_20567.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_113810.f_20567.f_233[num3 /*69*/].f_2[Global_113810.f_20567.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113810.f_20567.f_233[num3 /*69*/].f_2[Global_113810.f_20567.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113810.f_20567.f_233[num3 /*69*/] = Global_113810.f_20567.f_233[num3 /*69*/] + 1;
		Global_113810.f_20567.f_233[num3 /*69*/].f_1 = Global_113810.f_20567.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_113810.f_20567.f_233[num3 /*69*/].f_1 > 10)
			Global_113810.f_20567.f_233[num3 /*69*/].f_1 = 0;
	}

	func_67(iParam0);

	if (Global_43377 == 15)
		func_66(false);

	return 1;
}

void func_66(BOOL bParam0) // Position - 0x3D6A
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_113810.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_113810.f_20567.f_233[i /*69*/].f_2[j /*6*/];
			Global_113810.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_113810.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_113810.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_113810.f_20567.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_60667[i /*3*/][0] = Global_113810.f_20567[i];
		Global_60667.f_31[i /*3*/][0] = Global_113810.f_20567.f_11[i];
		Global_60667.f_62[i /*3*/][0] = Global_113810.f_20567.f_22[i];
		Global_60667.f_93[i /*3*/][0] = Global_113810.f_20567.f_33[i];
		Global_60667.f_124[i /*3*/][0] = Global_113810.f_20567.f_44[i];
		Global_60667.f_155[i /*3*/][0] = Global_113810.f_20567.f_55[i];
		Global_60667.f_186[i /*3*/][0] = Global_113810.f_20567.f_66[i];
		Global_60667.f_217[i /*3*/][0] = Global_113810.f_20567.f_77[i];
		Global_60667.f_248[i /*3*/][0] = Global_113810.f_20567.f_88[i];
	
		if (!bParam0)
		{
			Global_60667[i /*3*/][1] = Global_113810.f_20567[i];
			Global_60667.f_31[i /*3*/][1] = Global_113810.f_20567.f_11[i];
			Global_60667.f_62[i /*3*/][1] = Global_113810.f_20567.f_22[i];
			Global_60667.f_93[i /*3*/][1] = Global_113810.f_20567.f_33[i];
			Global_60667.f_124[i /*3*/][1] = Global_113810.f_20567.f_44[i];
			Global_60667.f_155[i /*3*/][1] = Global_113810.f_20567.f_55[i];
			Global_60667.f_186[i /*3*/][1] = Global_113810.f_20567.f_66[i];
			Global_60667.f_217[i /*3*/][1] = Global_113810.f_20567.f_77[i];
			Global_60667.f_248[i /*3*/][1] = Global_113810.f_20567.f_88[i];
		}
	}

	return;
}

void func_67(int iParam0) // Position - 0x3FEC
{
	int value;

	value = Global_60659[iParam0];

	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), value, true);
			break;
	
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), value, true);
			break;
	
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), value, true);
			break;
	}

	return;
}

void func_68(int iParam0) // Position - 0x404A
{
	BOOL flag;
	var txdName;

	if (iParam0 == 8)
	{
		_STAT_SET_PACKED_BOOL(129, false, -1);
		return;
	}

	if (iParam0 == 9)
	{
		_STAT_SET_PACKED_BOOL(135, false, -1);
		return;
	}

	if (iParam0 == 10)
	{
		_STAT_SET_PACKED_BOOL(136, false, -1);
		return;
	}

	if (iParam0 == 11)
	{
		_STAT_SET_PACKED_BOOL(137, false, -1);
		return;
	}

	if (iParam0 == 12)
	{
		func_71(8272, 0, -1, true);
		return;
	}

	if (iParam0 == 13)
	{
		func_71(8273, 0, -1, true);
		return;
	}

	if (iParam0 == 14)
	{
		func_71(8274, 0, -1, true);
		return;
	}

	if (iParam0 == 15)
	{
		func_71(8275, 0, -1, true);
		return;
	}

	if (iParam0 == 16)
	{
		func_71(8276, 0, -1, true);
		return;
	}

	if (iParam0 == 17)
	{
		func_71(8277, 0, -1, true);
		return;
	}

	flag = false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_113810.f_20567.f_471, iParam0))
		{
			flag = true;
			MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_113810.f_20567.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_70() /*5568*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_70() /*5568*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*You have redeemed your promotion for ~a~*/);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x41C2
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC" /*one free haircut.*/;
	
		case 1:
			return "COUP_TATTOO" /*one free tattoo.*/;
	
		case 2:
			return "COUP_WARSTOCK" /*10% off your next purchase at Warstock-Cache-and-Carry.com.*/;
	
		case 3:
			return "COUP_MOSPORT" /*10 percent off your next purchase at LegendaryMotorsport.net.*/;
	
		case 4:
			return "COUP_ELITAS" /*10 percent off your next purchase at ElitasTravel.com.*/;
	
		case 5:
			return "COUP_MEDSPENS" /*10 percent off your next medical expenses.*/;
	
		case 6:
			return "COUP_SPRUNK" /*one free can of Sprunk.*/;
	
		case 7:
			return "COUP_RESPRAY" /*one free respray.*/;
	
		case 8:
			return "COUP_XMAS2017";
	
		case 9:
			return "COUP_CAR_XMAS2018";
	
		case 10:
			return "COUP_HELI_XMAS2018";
	
		case 11:
			return "COUP_CAR2_XMAS2018";
	
		case 12:
			return "COUP_CAS_ELITAS" /*10 percent off your next purchase at ElitasTravel.com.*/;
	
		case 13:
			return "COUP_CAS_DOCKTEASE" /*10 percent off your next purchase at DockTease.com.*/;
	
		case 14:
			return "COUP_CAS_MOSPORT" /*10 percent off your next purchase at LegendaryMotorsport.net.*/;
	
		case 15:
			return "COUP_CAS_SSASA" /*10 percent off your next purchase at southernsanandreassuperautos.com.*/;
	
		case 16:
			return "COUP_CAS_WARSTOCK" /*10 percent off your next purchase at Warstock-Cache-and-Carry.com.*/;
	
		case 17:
			return "COUP_CAS_PANDM" /*10 percent off your next purchase at pandmcycles.com.*/;
	
		default:
			break;
	}

	return "";
}

int func_70() // Position - 0x42C3
{
	int num;

	num = 0;
	return num;
}

void func_71(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x42D0
{
	Hash statName;

	statName = func_72(iParam0, iParam2);

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

Hash func_72(int iParam0, int iParam1) // Position - 0x42F3
{
	return unk_0xD69CE161FE614531(0, iParam0, func_73(iParam1));
}

int func_73(int iParam0) // Position - 0x4308
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_74();
	
		if (num2 > -1)
		{
			Global_2805862 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2805862 = 1;
		}
	}

	return num;
}

int func_74() // Position - 0x433C
{
	return Global_1574918;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x4348
{
	if (iParam2 == -1)
		iParam2 = func_74();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_76(int iParam0) // Position - 0x4366
{
	func_95(93, iParam0);
	func_95(29, iParam0);
	func_95(30, iParam0);
	return;
}

BOOL func_77(int iParam0) // Position - 0x4386
{
	int cloudTimeAsInt;
	int num;
	int cloudTimeAsInt2;
	int num2;
	int cloudTimeAsInt3;
	int num3;
	int cloudTimeAsInt4;
	int num4;
	int cloudTimeAsInt5;
	int num5;
	int cloudTimeAsInt6;
	int num6;

	if (iParam0 == 8)
		return _STAT_GET_PACKED_BOOL(129, -1);

	if (iParam0 == 9)
		return _STAT_GET_PACKED_BOOL(135, -1);

	if (iParam0 == 10)
		return _STAT_GET_PACKED_BOOL(136, -1);

	if (iParam0 == 11)
		return _STAT_GET_PACKED_BOOL(137, -1);

	if (iParam0 == 12)
	{
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
		num = func_78(8272, -1);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_78(8273, -1);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_78(8274, -1);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_78(8275, -1);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_78(8276, -1);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_78(8277, -1);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_113810.f_20567.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_70() /*5568*/].f_681.f_10, iParam0);
}

int func_78(int iParam0, int iParam1) // Position - 0x4526
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14385)
	{
		statHash = func_72(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0x4555
{
	if (iParam1 == -1)
		iParam1 = func_74();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_80(BOOL bParam0) // Position - 0x4571
{
	var outValue;
	int value;
	int outValue2;

	value = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	bParam0;
	outValue2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &outValue2, -1);

	if (value > 0 && outValue2 / 2000000 != value / 2000000)
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), value, true);
		func_94(27, value);
	}

	if (value < 200000000)
		return 0;

	func_81(27, 1);
	return 1;
}

int func_81(int iParam0, int iParam1) // Position - 0x4628
{
	if (iParam0 >= 78)
		return 0;

	return func_82(iParam0, iParam1);
}

int func_82(int iParam0, int iParam1) // Position - 0x4643
{
	if (func_53(14) && !func_93(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_32534 != 0 && !Global_78689)
		return 0;

	if (func_92(&Global_4542602))
	{
		if (func_90(&Global_4542602, iParam0))
			return 0;
	
		if (func_83(&Global_4542602, iParam0))
			return 1;
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
			return 0;
	
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
			return 1;
	
		return 0;
	}

	return 0;
}

BOOL func_83(var uParam0, int iParam1) // Position - 0x46E0
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_53(14) && !func_93(iParam1))
		return false;

	if (func_90(uParam0, iParam1))
		return false;

	if (func_89(uParam0) < 0f)
		func_88(uParam0, 0);

	func_86(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_84(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_84(var uParam0, int iParam1) // Position - 0x4791
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_53(14) && !func_93(iParam1))
		return 0;

	if (func_90(uParam0, iParam1))
		return 0;

	if (func_89(uParam0) < 0f)
		func_88(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_85(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_85(var uParam0, int iParam1) // Position - 0x480C
{
	return uParam0->[iParam1] == 78;
}

void func_86(var uParam0) // Position - 0x481D
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_87(uParam0, i);
	}

	func_88(uParam0, Global_4542601 - 0.5f);
	return;
}

void func_87(var uParam0, int iParam1) // Position - 0x4851
{
	uParam0->[iParam1] = 78;
	return;
}

void func_88(var uParam0, int iParam1) // Position - 0x4861
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_89(var uParam0) // Position - 0x487E
{
	return uParam0->f_80;
}

BOOL func_90(var uParam0, int iParam1) // Position - 0x488A
{
	return func_91(uParam0, iParam1) != -1;
}

int func_91(var uParam0, int iParam1) // Position - 0x489C
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_92(var uParam0) // Position - 0x48C9
{
	return uParam0->f_79 == 1;
}

BOOL func_93(int iParam0) // Position - 0x48D7
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_94(int iParam0, int iParam1) // Position - 0x4927
{
	int achievementProgress;

	if (iParam0 < 0)
		return false;

	if (iParam0 > 78)
		return false;

	if (iParam1 <= 0 || iParam1 > 100)
		return false;

	achievementProgress = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > achievementProgress)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return false;
}

void func_95(int iParam0, int iParam1) // Position - 0x4978
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_59227[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_59227[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59227[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_59227[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

void func_96() // Position - 0x49D5
{
	int outValue;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_60659[0] == outValue))
			Global_60659[0] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_60659[1] == outValue))
			Global_60659[1] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
	
		if (!(Global_60659[2] == outValue))
			Global_60659[2] = outValue;
	}

	return;
}

int func_97(eCharacter echParam0) // Position - 0x4A4A
{
	return Global_2058[echParam0 /*29*/].f_17;
}

BOOL func_98(float fParam0, float fParam1, float fParam2) // Position - 0x4A5B
{
	float num;
	float num2;

	num2 = fParam1 - fParam2;

	if (num2 < 0f)
		num2 = num2 + 360f;

	num = fParam1 + fParam2;

	if (num >= 360f)
		num = num - 360f;

	if (num > num2)
		if (fParam0 < num && fParam0 > num2)
			return true;
	else if (fParam0 < num || fParam0 > num2)
		return true;

	return false;
}

void func_99() // Position - 0x4AD0
{
	Cam cam;

	cam = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1115815936, true, 2);
	CAM::SET_CAM_ACTIVE(cam, true);
	return;
}

BOOL func_100(int iParam0) // Position - 0x4B0E
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
			Global_27 = MISC::GET_GAME_TIMER();
	
		Global_28 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_27 > iParam0)
		{
			if (func_101())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_101() // Position - 0x4B58
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

Vector3 func_102(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x4B8A
{
	Vehicle playersLastVehicle;
	Vector3 offsetFromEntityInWorldCoords;
	Vector3 outPosition;
	var minimum;
	float maximum;
	int num;
	int num2;
	int hit;
	var surfaceNormal;
	var endCoords;
	Vector3 vector;
	Vector3 vector2;
	var entityHit;
	int shapeTestHandle;

	num = 0;
	num2 = 1;
	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, false);

	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(playersLastVehicle), &minimum, &maximum);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, 3, &outPosition, 1, 1077936128, 0);

	if (SYSTEM::VDIST(vParam0, -3039.6548f, 602.4346f, 6.5719f) <= 25f)
	{
		offsetFromEntityInWorldCoords = { -3045.49f, 604.46f, 7.02f };
		num = 8;
	}
	else if (SYSTEM::VDIST(vParam0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		offsetFromEntityInWorldCoords = { 278.97f, -1255.06f, 28.88f };
		num = 8;
	}

	while (num < 8)
	{
		switch (num)
		{
			case 0:
				if (SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, maximum.f_1 + (float)num2, 0f)) < SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, -(maximum.f_1 + (float)num2), 0f)))
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, maximum.f_1 + (float)num2, 0f) };
				else
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, -(maximum.f_1 + (float)num2), 0f) };
			
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
				{
					if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false))
					{
						vector = { func_103(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_103(offsetFromEntityInWorldCoords, 0f, minimum) };
						shapeTestHandle = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vector, vector2, 511, playersLastVehicle, 7);
						num = num + 1;
					}
					else
					{
						num = 8;
					}
				}
				else
				{
					num = 8;
				}
				break;
		
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit) == 2)
				{
					if (hit != 0)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 2;
						}
						else
						{
							num2 = num2 + 1;
							num = 0;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam3, true) <= 5f)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 2;
						}
						else
						{
							num2 = num2 + 1;
							num = 0;
						}
					}
					else
					{
						num = 8;
					}
				}
				break;
		
			case 2:
				if (SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, maximum.f_1 - (float)num2, 0f)) < SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, -(maximum.f_1 - (float)num2), 0f)))
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, maximum.f_1 - (float)num2, 0f) };
				else
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, 0f, -(maximum.f_1 - (float)num2), 0f) };
			
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
				{
					if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false))
					{
						vector = { func_103(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_103(offsetFromEntityInWorldCoords, 0f, minimum) };
						shapeTestHandle = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vector, vector2, 511, playersLastVehicle, 7);
						num = num + 1;
					}
					else
					{
						num = 8;
					}
				}
				else
				{
					num = 8;
				}
				break;
		
			case 3:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit) == 2)
				{
					if (hit != 0)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 4;
						}
						else
						{
							num2 = num2 + 1;
							num = 2;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam3, true) <= 5f)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 4;
						}
						else
						{
							num2 = num2 + 1;
							num = 2;
						}
					}
					else
					{
						num = 8;
					}
				}
				break;
		
			case 4:
				if (SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, maximum + (float)num2, 0f, 0f)) < SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, -(maximum + (float)num2), 0f, 0f)))
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, maximum + (float)num2, 0f, 0f) };
				else
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, -(maximum + (float)num2), 0f, 0f) };
			
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
				{
					if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false))
					{
						vector = { func_103(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_103(offsetFromEntityInWorldCoords, 0f, minimum) };
						shapeTestHandle = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vector, vector2, 511, playersLastVehicle, 7);
						num = num + 1;
					}
					else
					{
						num = 8;
					}
				}
				else
				{
					num = 8;
				}
				break;
		
			case 5:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit) == 2)
				{
					if (hit != 0)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 6;
						}
						else
						{
							num2 = num2 + 1;
							num = 4;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam3, true) <= 5f)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 6;
						}
						else
						{
							num2 = num2 + 1;
							num = 4;
						}
					}
					else
					{
						num = 8;
					}
				}
				break;
		
			case 6:
				if (SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, maximum - (float)num2, 0f, 0f)) < SYSTEM::VDIST(outPosition, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, -(maximum - (float)num2), 0f, 0f)))
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, maximum - (float)num2, 0f, 0f) };
				else
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(playersLastVehicle, -(maximum - (float)num2), 0f, 0f) };
			
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
				{
					if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle, false))
					{
						vector = { func_103(offsetFromEntityInWorldCoords, 0f, maximum) };
						vector2 = { func_103(offsetFromEntityInWorldCoords, 0f, minimum) };
						shapeTestHandle = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vector, vector2, 511, playersLastVehicle, 7);
						num = num + 1;
					}
					else
					{
						num = 8;
					}
				}
				else
				{
					num = 8;
				}
				break;
		
			case 7:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit) == 2)
				{
					if (hit != 0)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 8;
						}
						else
						{
							num2 = num2 + 1;
							num = 6;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(offsetFromEntityInWorldCoords, vParam3, true) <= 5f)
					{
						if (num2 >= 3)
						{
							num2 = 1;
							num = 8;
						}
						else
						{
							num2 = num2 + 1;
							num = 6;
						}
					}
					else
					{
						num = 8;
					}
				}
				break;
		
			case 8:
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return offsetFromEntityInWorldCoords;
}

Vector3 func_103(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, var uParam5, var uParam6) // Position - 0x518B
{
	float num;
	float value;
	float num2;
	float num3;
	var unk3;

	value = fParam3;
	num2 = SYSTEM::COS(value);
	num3 = SYSTEM::SIN(value);
	num = (fParam4 * num2) + (fParam4.f_1 * num3);
	num.f_1 = (fParam4.f_1 * num2) - (fParam4 * num3);
	unk3 = { uParam0 + num };
	return unk3;
}

void func_104(Ped pedParam0, var uParam1, var uParam2, char* sParam3, char* sParam4) // Position - 0x51D8
{
	int num;
	int num2;
	int num3;
	float num4;
	float heading;
	int shapeTestHandle;
	int hit;
	var surfaceNormal;
	var endCoords;
	var animInitialOffsetPosition;
	Vector3 vector;
	var entityHit;

	num = 0;
	num2 = 0;
	num3 = 1;
	*uParam1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	uParam2->f_2 = func_106(pedParam0, PLAYER::PLAYER_PED_ID(), 1);
	num4 = func_106(pedParam0, PLAYER::PLAYER_PED_ID(), 1);
	heading = func_106(pedParam0, PLAYER::PLAYER_PED_ID(), 1);
	vector = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };

	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam3))
		animInitialOffsetPosition = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	else
		animInitialOffsetPosition = { *uParam1 + { 0f, 5f, 5f } };

	while (num < 2)
	{
		switch (num)
		{
			case 0:
				if (num2 > 20)
				{
					uParam2->f_2 = func_105(ENTITY::GET_ENTITY_COORDS(pedParam0, false), *uParam1, 1);
					*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false), uParam2->f_2, vector) };
					num = 2;
				}
				else
				{
					shapeTestHandle = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1, animInitialOffsetPosition + { -1f, 0f, 0f }, 0.5f, 17, 0, 4);
					num = num + 1;
				}
				break;
		
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit) == 2)
				{
					if (hit != 0)
					{
						if (endCoords.f_2 > uParam1->f_2 + 8.5f)
						{
							num = num + 1;
						}
						else
						{
							if (num2 <= 3)
							{
								heading = heading + 7.5f;
							}
							else
							{
								heading = num4 - (7.5f * (float)num3);
								num3 = num3 + 1;
							}
						
							*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), heading, vector) };
							num2 = num2 + 1;
							num = 0;
						}
					}
					else
					{
						if (num2 > 0)
							uParam2->f_2 = func_105(animInitialOffsetPosition + { -0.75f, 0f, 0f }, *uParam1, 1);
					
						num = num + 1;
					}
				}
				break;
		
			case 2:
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

float func_105(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0x5390
{
	float num;
	float num2;
	float num3;

	num2 = fParam3 - uParam0;
	num3 = fParam3.f_1 - uParam0.f_1;

	if (num3 != 0f)
		num = MISC::ATAN2(num2, num3);
	else if (num2 < 0f)
		num = -90f;
	else
		num = 90f;

	if (iParam6 == 1)
	{
		num = num * -1f;
	
		if (num < 0f)
			num = num + 360f;
	}

	return num;
}

float func_106(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0x53F5
{
	var entityCoords;
	var entityCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, false) };
	return func_105(entityCoords, entityCoords2, iParam2);
}

void func_107(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x5421
{
	BOOL flag;
	float dx;
	float headingFromVector2d;

	flag = false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		dx = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - uParam0 };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
	
		if (func_108(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), headingFromVector2d, 15f))
			flag = true;
	
		dx = { uParam0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
	
		if (func_108(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), headingFromVector2d, 15f))
			flag = true;
	}

	if (flag)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 30f)
			*uParam3 = 6f * 4f;
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 20f)
			*uParam3 = 6f * 3f;
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
			*uParam3 = 6f * 2f;
		else
			*uParam3 = 6f;
	
		*uParam4 = (*uParam3 / 1.33f) - 1f;
	}
	else
	{
		*uParam3 = 6f;
		*uParam4 = (*uParam3 / 1.33f) - 1f;
	}

	return;
}

BOOL func_108(Vehicle veParam0, float fParam1, float fParam2) // Position - 0x5522
{
	float entityHeading;
	float num;
	float num2;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		entityHeading = ENTITY::GET_ENTITY_HEADING(veParam0);
		num2 = fParam1 - fParam2;
	
		if (num2 < 0f)
			num2 = num2 + 360f;
	
		num = fParam1 + fParam2;
	
		if (num >= 360f)
			num = num - 360f;
	
		if (num > num2)
			if (entityHeading < num && entityHeading > num2)
				return true;
		else if (entityHeading < num || entityHeading > num2)
			return true;
	}

	return false;
}

void func_109() // Position - 0x55A9
{
	Global_20711 = 0;
	func_110();
	return;
}

void func_110() // Position - 0x55B9
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
	}

	return;
}

BOOL func_111(Vehicle veParam0, float fParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x55DA
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ACCELERATE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UD, true);

	if (bParam5)
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);

	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HORN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_NEXT_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PREV_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_FRONT_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_PEDAL, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_UNDERCARRIAGE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_BOOST, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_ASCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_DESCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_RIGHT, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	func_112(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_29 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);

	Global_29 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return true;

	return false;
}

void func_112(Vehicle veParam0) // Position - 0x5772
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

void func_113(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x579E
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_121(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20500.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_50())
				Global_20500.f_1 = 3;
		
			Global_21845 = 5;
		}
	
		func_120(true, bParam3, bParam2, false);
		Global_63491 = 1;
		Global_75819 = 1;
		Global_78687 = 1;
	}
	else
	{
		func_121(0);
		HUD::THEFEED_RESUME();
		Global_63491 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_120(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_118(PLAYER::PLAYER_ID()) && !func_115(PLAYER::PLAYER_ID(), 0) && !func_114() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_118(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		Global_78687 = 0;
	}

	return;
}

BOOL func_114() // Position - 0x58EB
{
	return IS_BIT_SET(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

BOOL func_115(Player plParam0, int iParam1) // Position - 0x5905
{
	BOOL flag;

	if (!func_117(plParam0))
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_116(-1, false) == 8;
	else
		flag = Global_1853988[plParam0 /*867*/].f_205 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_116(int iParam0, BOOL bParam1) // Position - 0x595E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_74();

	if (Global_1575043[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574912[num2];
		bParam1;
	}

	return num;
}

BOOL func_117(Player plParam0) // Position - 0x599F
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_118(Player plParam0) // Position - 0x59C1
{
	if (func_115(plParam0, 0))
		return true;

	if (func_119())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657704[plParam0 /*463*/].f_199, 2))
		return true;

	return false;
}

BOOL func_119() // Position - 0x5A00
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_120(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5A0E
{
	int num;

	num = 0;

	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			num = 1;
		}
	}

	return num;
}

void func_121(int iParam0) // Position - 0x5A41
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8370, 13);
	else
		MISC::CLEAR_BIT(&Global_8370, 13);

	return;
}

BOOL func_122() // Position - 0x5A64
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
			return true;

	return false;
}

BOOL func_123(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5A85
{
	Vehicle vehiclePedIsIn;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return false;

	if (bParam0)
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			return false;

	vehiclePedIsIn = 0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			return false;
	
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (bParam0)
			if (ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				return false;
	
		if (bParam2)
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) != PLAYER::PLAYER_PED_ID())
					return false;
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) > 1.011f)
				return false;
	}
	else if (bParam1)
	{
		return false;
	}

	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
		return false;

	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_124(int iParam0) // Position - 0x5B6A
{
	return _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(func_125(iParam0));
}

char* func_125(int iParam0) // Position - 0x5B7C
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = "AM_H_REFS" /*Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby.*/;
			break;
	
		case 1:
			str = "RE_FLASHBLIP" /*Flashing blue and red blips indicate situations around San Andreas that you can choose to help with.*/;
			break;
	
		case 2:
			str = "RE_HANDOVER" /*If you retrieve a stolen item, you can choose to keep it or return it for a reward.*/;
			break;
	}

	return str;
}

int _GET_PLAYER_CASH(eCharacter echParam0) // Position - 0x5BBE
{
	int outValue;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		case CHAR_FRANKLIN:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		case CHAR_TREVOR:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		default:
		
	}

	return 0;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x5C16
{
	func_128();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_128() // Position - 0x5C2F
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_129(character) && !func_53(14) || Global_112760)
			{
				if (Global_113810.f_2366.f_539.f_4321 != character && func_129(Global_113810.f_2366.f_539.f_4321))
					Global_113810.f_2366.f_539.f_4322 = Global_113810.f_2366.f_539.f_4321;
			
				Global_113810.f_2366.f_539.f_4323 = character;
				Global_113810.f_2366.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_113810.f_2366.f_539.f_4321 != _CHAR_NULL)
				Global_113810.f_2366.f_539.f_4323 = Global_113810.f_2366.f_539.f_4321;
		
			return;
		}
	}

	Global_113810.f_2366.f_539.f_4321 = 145;
	return;
}

BOOL func_129(eCharacter echParam0) // Position - 0x5D2C
{
	return echParam0 < CHAR_MULTIPLAYER;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x5D38
{
	eCharacter i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == entityModel)
				return i;
		}
	}

	return _CHAR_NULL;
}

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x5D75
{
	if (func_129(character))
		return func_132(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_132(eCharacter echParam0) // Position - 0x5D9A
{
	return Global_2058[echParam0 /*29*/];
}

void func_133() // Position - 0x5DA9
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_60, true);
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL func_134() // Position - 0x5DD9
{
	Vector3 vector;
	Vector3 vector2;

	vector = { 3f, 3f, 3f };
	vector2 = { -3f, -3f, -3f };

	if (PED::IS_PED_INJURED(pedLocal_60))
	{
		return true;
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), true))
			return true;
	
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_60, 31086, 0f, 0f, 0f), 5f, true))
			return true;
	
		vector = { vector + PED::GET_PED_BONE_COORDS(pedLocal_60, 31086, 0f, 0f, 0f) };
		vector2 = { vector2 + PED::GET_PED_BONE_COORDS(pedLocal_60, 31086, 0f, 0f, 0f) };
	
		if (MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_GRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_STICKYBOMB"), true))
			return true;
	
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(pedLocal_60, 31086, 0f, 0f, 0f), 3f))
			return true;
	}

	return false;
}

void func_135() // Position - 0x5EC2
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_60, true)) > fLocal_163 + 50f)
			func_199();
		else if (_GET_PLAYER_CASH(_GET_CURRENT_PLAYER_CHARACTER()) < iLocal_190)
			func_199();

	return;
}

void func_136() // Position - 0x5F0D
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, Global_19, false, true, 0))
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 3000, 0, 2);
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
		}
	}

	return;
}

void func_137() // Position - 0x5F52
{
	float width;

	if (iLocal_88 == 1)
		width = 13f;

	if (iLocal_88 == 4)
		width = 5.75f;

	if (iLocal_88 == 1 || iLocal_88 == 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_164, uLocal_167, width, false, true, 0))
		{
			if (!bLocal_155)
			{
				if (!PED::IS_PED_INJURED(pedLocal_60))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 0);
					bLocal_155 = true;
					bLocal_156 = false;
				}
			}
		}
	
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_170, uLocal_173, width, false, true, 0))
		{
			if (!bLocal_156)
			{
				if (!PED::IS_PED_INJURED(pedLocal_60))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 0);
					bLocal_156 = true;
					bLocal_155 = false;
				}
			}
		}
	
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_176, uLocal_179, width, false, true, 0))
			if (!bLocal_157)
				if (!PED::IS_PED_INJURED(pedLocal_60))
					bLocal_157 = true;
	}

	if (!bLocal_158)
	{
		if (!PED::IS_PED_INJURED(pedLocal_60))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 25f, 25f, 5f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_106, 4, 0, 0, 0) || func_62())
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "flee_forward_outro_shopkeeper", 3))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					
						if (iLocal_45 == 2)
							TASK::TASK_PLAY_ANIM(0, sLocal_375, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, false, false, false);
					
						TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
						bLocal_158 = true;
					}
				}
			}
		}
	}

	return;
}

void func_138(Ped pedParam0, var uParam1) // Position - 0x60D4
{
	float angle;

	angle = 65f;

	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(pedParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
				TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_119);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
				SYSTEM::SETTIMERA(0);
				*uParam1 = *uParam1 + 1;
			}
			break;
	
		case 1:
			if (!PED::IS_PED_INJURED(pedParam0))
				if (PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), angle))
					*uParam1 = *uParam1 + 1;
			break;
	
		case 2:
			if (!PED::IS_PED_INJURED(pedParam0))
				if (!PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), angle))
					*uParam1 = 0;
			break;
	}

	return;
}

void func_139() // Position - 0x618C
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(pkLocal_189))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
			fLocal_163 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_60, true));
	
		func_63(joaat("RC_WALLETS_RECOVERED"), 1);
		PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 200, 250);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
			OBJECT::DELETE_OBJECT(&obLocal_62);
	
		func_142();
		func_141(&uLocal_390);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
			if (!PED::IS_PED_INJURED(pedLocal_60))
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedLocal_60, false);
	
		func_147(false);
		OBJECT::REMOVE_PICKUP(pkLocal_189);
	
		if (!bLocal_54)
		{
			iLocal_46 = 5;
			func_140(2);
		}
		else
		{
			iLocal_46 = 12;
		}
	}

	return;
}

void func_140(int iParam0) // Position - 0x6224
{
	switch (iParam0)
	{
		case 0:
			if (Global_113810.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_125(iParam0), -1);
					Global_113810.f_24998.f_2 = Global_113810.f_24998.f_2 + 1;
					MISC::SET_BIT(&Global_113806, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_113806, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_125(iParam0), -1);
					Global_113810.f_24998.f_3 = Global_113810.f_24998.f_3 + 1;
					MISC::SET_BIT(&Global_113806, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_113806, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					_DISPLAY_HELP_TEXT(func_125(iParam0), -1);
					Global_113810.f_24998.f_4 = Global_113810.f_24998.f_4 + 1;
					MISC::SET_BIT(&Global_113806, 2);
				}
			}
			break;
	}

	return;
}

void func_141(var uParam0) // Position - 0x62FF
{
	*uParam0 = -99;
	return;
}

void func_142() // Position - 0x630D
{
	blLocal_65 = 0;

	if (!HUD::DOES_BLIP_EXIST(blLocal_63))
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
			blLocal_63 = func_143(pedLocal_60, false, 0);

	return;
}

Blip func_143(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x6337
{
	iParam2 = iParam2;
	return func_144(pedParam0, bParam1, 145);
}

Blip func_144(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x634D
{
	Blip blip;

	blip = func_145(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2058[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2058[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_145(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6397
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(pedParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

var func_146(BOOL bParam0, var uParam1, var uParam2) // Position - 0x643B
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_147(BOOL bParam0) // Position - 0x6452
{
	if (!PED::IS_PED_INJURED(pedLocal_60) && iLocal_88 == 4)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "flee_forward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		
			if (bParam0)
			{
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
			}
		
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::CLEAR_PED_TASKS(pedLocal_60);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
	}

	return;
}

BOOL func_148() // Position - 0x6538
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
		if (ENTITY::IS_ENTITY_ATTACHED(obLocal_62))
			if (!PED::IS_PED_INJURED(pedLocal_60))
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(obLocal_62, pedLocal_60))
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 18f, 18f, 18f, false, true, 0))
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							return true;

	return false;
}

void func_149(Blip blParam0, var uParam1) // Position - 0x6596
{
	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		if (MISC::GET_GAME_TIMER() > *uParam1 + 500)
		{
			if (HUD::GET_BLIP_COLOUR(blParam0) == 1)
			{
				HUD::SET_BLIP_AS_FRIENDLY(blParam0, true);
			}
			else
			{
				HUD::SET_BLIP_AS_FRIENDLY(blParam0, false);
				HUD::SET_BLIP_COLOUR(blParam0, 1);
			}
		
			*uParam1 = MISC::GET_GAME_TIMER();
		}
	
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_150(0))
			func_140(1);
	}

	return;
}

BOOL func_150(int iParam0) // Position - 0x65F4
{
	return IS_BIT_SET(Global_113806, iParam0);
}

void func_151() // Position - 0x6603
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 8f, 8f, 18f, false, true, 0) || ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_60))
			HUD::CLEAR_PRINTS();

	return;
}

void func_152() // Position - 0x6644
{
	if (HUD::DOES_BLIP_EXIST(blLocal_64))
		HUD::REMOVE_BLIP(&blLocal_64);

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(obLocal_62))
		{
			ENTITY::DETACH_ENTITY(obLocal_62, true, true);
			OBJECT::DELETE_OBJECT(&obLocal_62);
			func_40();
		}
	}
	else
	{
		func_40();
	}

	if (!PED::IS_PED_INJURED(pedLocal_61))
	{
		if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_105, 4, 0, 0, 0) || func_62())
		{
			if (iLocal_45 == 2)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_61, 128, true);
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_61, 2, true);
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_61, 1, false);
				TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
			}
		
			PED::SET_PED_KEEP_TASK(pedLocal_61, true);
		}
	}

	return;
}

BOOL func_153() // Position - 0x66E3
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_61, false))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_61, PLAYER::PLAYER_PED_ID(), true))
			if (bLocal_147)
				return true;
	else if (bLocal_147)
		return true;

	return false;
}

void func_154() // Position - 0x671A
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		TASK::CLEAR_PED_TASKS(pedLocal_60);
		TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(pedLocal_60, true);
		SYSTEM::WAIT(0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
	}

	if (!PED::IS_PED_INJURED(pedLocal_61))
	{
		_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_110, 4, 0, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
		TASK::TASK_CLEAR_LOOK_AT(0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_61, iLocal_119);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		PED::SET_PED_KEEP_TASK(pedLocal_61, true);
		SYSTEM::WAIT(0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_61, false, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_61);
	}

	return;
}

BOOL func_155() // Position - 0x67B4
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
		if (PED::IS_PED_RAGDOLL(pedLocal_60))
			return true;

	return false;
}

Blip func_156(Pickup pkParam0) // Position - 0x67D4
{
	return func_157(pkParam0);
}

Blip func_157(Pickup pkParam0) // Position - 0x67E2
{
	Blip blip;

	if (!OBJECT::DOES_PICKUP_EXIST(pkParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_PICKUP(pkParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	return blip;
}

BOOL func_158() // Position - 0x681A
{
	if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
		{
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
			{
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_61, false))
				{
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61, 18f, 18f, 18f, false, true, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_61, PLAYER::PLAYER_PED_ID(), true))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_141 = 1;
							return true;
						}
					}
				}
			
				if (func_159())
				{
					SYSTEM::SETTIMERB(0);
					iLocal_141 = 2;
					return true;
				}
			
				if (PED::IS_PED_INJURED(pedLocal_61))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_61, PLAYER::PLAYER_PED_ID(), true))
					{
						if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
						{
							if (!PED::IS_PED_INJURED(pedLocal_60))
							{
								TASK::CLEAR_PED_TASKS(pedLocal_60);
								PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedLocal_60, false);
							}
						}
					
						SYSTEM::SETTIMERB(0);
						iLocal_141 = 2;
						return true;
					}
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_61, PLAYER::PLAYER_PED_ID(), true))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_141 = 2;
				
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
					{
						if (!PED::IS_PED_INJURED(pedLocal_60))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_60);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedLocal_60, false);
						}
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_61))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_61);
						TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_61, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_61, false, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_61);
					}
				
					return true;
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
			{
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 5.3f, 5.3f, 6f, false, true, 0))
					{
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60))
							{
								SYSTEM::SETTIMERB(0);
								iLocal_141 = 3;
								return true;
							}
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_159() // Position - 0x69BE
{
	if (!PED::IS_PED_INJURED(pedLocal_61))
	{
		if (PED::CAN_PED_SEE_HATED_PED(pedLocal_61, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61, 20f, 20f, 20f, false, true, 0))
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_61) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_61))
					return true;
	
		if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
			return true;
	
		if (PED::IS_PED_RAGDOLL(pedLocal_61))
			return true;
	}

	return false;
}

void func_160() // Position - 0x6A48
{
	if (bLocal_56)
	{
		if (!bLocal_57)
			if (!PED::IS_PED_INJURED(pedLocal_61))
				if (WEAPON::IS_PED_ARMED(pedLocal_61, 4))
					if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_110, 4, 0, 0, 0) || func_62() || func_62())
						bLocal_57 = true;
				else if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_105, 4, 0, 0, 0) || func_62() || func_62())
					bLocal_57 = true;
	}
	else if (func_159())
	{
		if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_114, 4, 0, 0, 0) || func_62() || func_62())
		{
			if (WEAPON::IS_PED_ARMED(pedLocal_61, 4))
				TASK::TASK_COMBAT_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
			else
				func_152();
		
			bLocal_56 = true;
		}
	}

	return;
}

BOOL func_161() // Position - 0x6B12
{
	int weaponHash;

	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 20f, 20f, 20f, false, true, 0))
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60))
					return true;
	
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true))
			if (weaponHash == joaat("WEAPON_STUNGUN"))
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(pedLocal_60, joaat("WEAPON_STUNGUN"), 0))
					return true;
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), true))
			return true;
	}
	else
	{
		return true;
	}

	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_60, 31086, 0f, 0f, 0f), 3f, true))
		return true;

	return false;
}

void func_162() // Position - 0x6BCE
{
	iLocal_45 == 2;

	if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
	{
		if (SYSTEM::TIMERA() > 10000)
		{
			if (!PED::IS_PED_INJURED(pedLocal_60))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_60))
				{
					func_163(pedLocal_60, "GENERIC_CURSE_MED", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
		}
	}

	if (!bLocal_58)
		if (func_38(PLAYER::PLAYER_PED_ID(), pedLocal_61, true) > 200f)
			if (!ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_61) || ENTITY::IS_ENTITY_OCCLUDED(pedLocal_61))
				iLocal_46 = 8;

	return;
}

void func_163(Ped pedParam0, char* sParam1, int iParam2) // Position - 0x6C47
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(iParam2), 1);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x6C5E
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	str = 0;
	return str;
}

void func_165() // Position - 0x6E53
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (!bLocal_51)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "flee_backward_loop_shopkeeper", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
				iLocal_162 = 3;
				bLocal_51 = true;
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_60, sLocal_357, "flee_forward_loop_shopkeeper", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, false, false, false);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
				iLocal_162 = 3;
				bLocal_51 = true;
			}
			else
			{
				bLocal_51 = true;
			}
		}
	
		if (bLocal_51)
		{
			if (!bLocal_134)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 7f, 7f, 7f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
					{
						if (TASK::GET_SEQUENCE_PROGRESS(pedLocal_60) == iLocal_162)
						{
							TASK::TASK_LOOK_AT_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
							_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_104, 4, 0, 0, 0);
							bLocal_153 = true;
							bLocal_134 = true;
						}
					}
					else
					{
						AUDIO::STOP_PED_SPEAKING(pedLocal_60, true);
						_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_104, 4, 0, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
						SYSTEM::SETTIMERA(0);
						bLocal_153 = true;
						bLocal_134 = true;
					}
				}
			}
		}
	}

	return;
}

BOOL func_166() // Position - 0x70B4
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 12f, 12f, 5f, false, true, 0))
			return true;

	return false;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0x70E6
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_168() // Position - 0x7108
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (!bLocal_132)
		{
			iLocal_136 = MISC::GET_GAME_TIMER();
			bLocal_132 = true;
		}
	
		if (bLocal_132)
		{
			iLocal_137 = MISC::GET_GAME_TIMER();
		
			if (!bLocal_52)
			{
				if (iLocal_137 - iLocal_136 > 500)
				{
					if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
					{
						if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_103, 4, 0, 0, 0) || func_62())
						{
							if (iLocal_45 == 2)
								if (!PED::IS_PED_INJURED(pedLocal_60))
									!PED::IS_PED_INJURED(pedLocal_61);
						
							if (iLocal_45 == 1)
								!PED::IS_PED_INJURED(pedLocal_60);
						
							if (HUD::DOES_BLIP_EXIST(blLocal_63))
								HUD::REMOVE_BLIP(&blLocal_63);
						
							bLocal_52 = true;
						}
					}
				}
			}
		}
	}

	return;
}

void func_169() // Position - 0x71A4
{
	float targetRadius;

	if (!bLocal_53)
	{
		if (iLocal_88 == 1)
			targetRadius = 1f;
	
		if (iLocal_88 == 2)
			targetRadius = 4f;
	
		if (iLocal_88 != 2)
		{
			if (!PED::IS_PED_INJURED(pedLocal_60) && !PED::IS_PED_INJURED(pedLocal_61))
			{
				if (!func_196())
					if (func_183())
						func_280();
			
				if (func_182())
				{
					if (!HUD::DOES_BLIP_EXIST(blLocal_66))
					{
						if (!ENTITY::IS_ENTITY_DEAD(pedLocal_61, false))
							blLocal_66 = func_143(pedLocal_61, true, 0);
					
						func_174(true);
					}
				}
			
				if (func_173())
				{
					func_172();
				
					if (iLocal_88 == 3)
					{
						if (!bLocal_55)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
							TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_61, 16000, 0, 2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uLocal_85, 1f, 20000, targetRadius, 4, 1193033728);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
							bLocal_55 = true;
						}
					
						TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
						TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_60, -1, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, false, false, false);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, uLocal_85, pedLocal_60, 1f, false, 1.5f, 1082130432, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, pedLocal_60, -1, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_61, iLocal_119);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
						SYSTEM::SETTIMERA(0);
						bLocal_53 = true;
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					}
					else
					{
						if (iLocal_88 == 1)
							sLocal_109 = sLocal_109;
					
						func_171();
						bLocal_53 = true;
						bLocal_147 = true;
						SYSTEM::SETTIMERA(0);
					}
				}
			}
		}
	}

	if (bLocal_53)
	{
		if (!bLocal_133)
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61, 60f, 60f, 50f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_60, pedLocal_61, 0);
				
					bLocal_133 = true;
				}
				else
				{
					bLocal_133 = true;
				}
			}
		}
	
		if (bLocal_133 && !bLocal_131)
		{
			if (!PED::IS_PED_INJURED(pedLocal_60) && !PED::IS_PED_INJURED(pedLocal_61))
			{
				if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_102, 4, 0, 0, 0) || func_62())
				{
					TASK::CLEAR_PED_TASKS(pedLocal_60);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
					TASK::TASK_PLAY_ANIM(0, sLocal_357, "handsup_standing_enter", 8f, -4f, -1, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_357, "handsup_standing_base", 8f, -4f, 7000, 0, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, sLocal_357, "handsup_standing_exit", 8f, -4f, -1, 0, 0, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
					func_172();
					pkLocal_189 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_PURSE"), OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(pedLocal_60, 0f, 2.5f, 0f), 1067030938, 1069547520), iLocal_142, iLocal_190, true, hLocal_83);
					bLocal_131 = true;
				}
			}
		}
	
		if (bLocal_131)
		{
			if (PED::IS_PED_INJURED(pedLocal_61))
			{
				func_170();
			}
			else
			{
				switch (iLocal_665)
				{
					case 0:
						uLocal_668 = { OBJECT::GET_PICKUP_COORDS(pkLocal_189) - { 0f, 0f, 0.75f } };
					
						if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_61);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, uLocal_668, pedLocal_60, 2f, false, 0.1f, 1082130432, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_61, iLocal_119);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
							iLocal_666 = MISC::GET_GAME_TIMER();
						}
					
						iLocal_665 = 1;
						break;
				
					case 1:
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_61, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
						{
							uLocal_668 = { OBJECT::GET_PICKUP_COORDS(pkLocal_189) - { 0f, 0f, 0.75f } };
						
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_61, true), uLocal_668, true) > 1f)
								{
									iLocal_667 = 1;
									iLocal_665 = 4;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(pedLocal_61);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
									TASK::TASK_PLAY_ANIM(0, sLocal_358, "pickup_low", 8f, -4f, -1, 8224, 0, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
									TASK::TASK_PERFORM_SEQUENCE(pedLocal_61, iLocal_119);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
									iLocal_665 = 2;
								}
							}
							else
							{
								iLocal_665 = 4;
							}
						}
					
						if (MISC::GET_GAME_TIMER() - iLocal_666 > 15000)
						{
							iLocal_667 = 1;
							iLocal_665 = 4;
						}
						break;
				
					case 2:
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_61, sLocal_358, "pickup_low") > 0.5f)
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(pkLocal_189))
							{
								OBJECT::REMOVE_PICKUP(pkLocal_189);
								iLocal_665 = 3;
							}
							else
							{
								iLocal_665 = 4;
							}
						}
						break;
				
					case 3:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_61, sLocal_358, "pickup_low", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_61, sLocal_358, "pickup_low") > 0.58f || !ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_61, sLocal_358, "pickup_low", 3))
							iLocal_665 = 4;
						break;
				
					case 4:
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_61, true, 1);
						TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 50f, -1, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_61, false, false);
						bLocal_147 = true;
						break;
				}
			}
		}
	}

	return;
}

void func_170() // Position - 0x763A
{
	if (HUD::DOES_BLIP_EXIST(blLocal_63))
		HUD::REMOVE_BLIP(&blLocal_63);

	if (!HUD::DOES_BLIP_EXIST(blLocal_65))
		if (OBJECT::DOES_PICKUP_EXIST(pkLocal_189))
			blLocal_65 = func_156(pkLocal_189);

	iLocal_46 = 4;
	return;
}

void func_171() // Position - 0x766F
{
	!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());

	if (PED::IS_PED_FACING_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 90f))
	{
		TASK::TASK_PLAY_ANIM(pedLocal_61, sLocal_357, sLocal_365, 1000f, -1000f, -1, 8, 0, false, false, false);
	
		if (iLocal_45 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, sLocal_366, 8f, -8f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
		else if (iLocal_88 == 4)
		{
			iLocal_377 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(39.7889f, -1014.3917f, 28.4847f, 4f, 4f, 4f, 0f, false, 4);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, sLocal_366, 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
	}
	else
	{
		TASK::TASK_PLAY_ANIM(pedLocal_61, sLocal_357, sLocal_367, 1000f, -1000f, -1, 8, 0, false, false, false);
	
		if (iLocal_45 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, sLocal_368, 8f, -8f, -1, 8, 0.1f, false, false, false);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, -94.8543f, -1582.6864f, 30.2862f, 3000);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
		else if (iLocal_88 == 4)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, sLocal_368, 8f, -4f, -1, 8, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_a", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_b", 8f, -4f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_357, "agitated_loop_c", 8f, -4f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
		}
	}

	return;
}

void func_172() // Position - 0x7ADD
{
	if (HUD::DOES_BLIP_EXIST(blLocal_66))
		HUD::REMOVE_BLIP(&blLocal_66);

	if (!HUD::DOES_BLIP_EXIST(blLocal_64))
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_61, false))
			blLocal_64 = func_143(pedLocal_61, true, 0);

	return;
}

BOOL func_173() // Position - 0x7B13
{
	BOOL num;

	num = 0;

	if (iLocal_88 == 1)
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -170.30515f, -1670.3619f, 53.730835f, -91.94043f, -1578.8281f, 24.96221f, 18f, false, false, 0))
			num = 1;
	else if (iLocal_88 == 2)
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedLocal_61, true), true) < 30f)
			num = 1;
	else if (iLocal_88 == 4)
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.326782f, -959.64435f, 38.444405f, 119.920845f, -1021.23083f, 21.857378f, 123.75f, false, true, 0))
			num = 1;
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -325.7037f, -829.31f, 30.5812f, true) < 95f)
		num = 1;

	return num;
}

int func_174(BOOL bParam0) // Position - 0x7BED
{
	if (func_176())
	{
		Global_113800 = true;
		Global_113797 = MISC::GET_GAME_TIMER();
	
		if (func_175(Global_113799))
			func_140(0);
	
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /*Random Event*/);
	
		if (bParam0 && func_175(Global_113799))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

BOOL func_175(int iParam0) // Position - 0x7C40
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}

	return true;
}

BOOL func_176() // Position - 0x7C6F
{
	switch (func_177(&Global_32343, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_177(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x7CA5
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98291.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_181(0))
			return 0;
	
		Global_43341 = Global_43341 + 1;
		*uParam0 = Global_43341;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23251.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_43377 = iParam2;
		Global_43339 = *uParam0;
		Global_43340 = iParam4;
		Global_43338 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_43338 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_43338; i = i + 1)
			{
				if (Global_43344[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_43339 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_43338 == 8)
			return 0;
	
		Global_43341 = Global_43341 + 1;
		*uParam0 = Global_43341;
		Global_43344[Global_43338 /*4*/] = Global_43341;
		Global_43344[Global_43338 /*4*/].f_1 = iParam1;
		Global_43344[Global_43338 /*4*/].f_2 = iParam2;
		Global_43344[Global_43338 /*4*/].f_3 = 0;
		Global_43338 = Global_43338 + 1;
	
		if (iParam4 != 0)
			func_178(uParam0, iParam4);
	}

	return 2;
}

void func_178(var uParam0, int iParam1) // Position - 0x7DDC
{
	int i;

	if (Global_43338 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_43338; i = i + 1)
	{
		if (Global_43344[i /*4*/] == *uParam0)
			Global_43344[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x7E2B
{
	return func_180(iParam0, Global_43377);
}

BOOL func_180(int iParam0, int iParam1) // Position - 0x7E3C
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

BOOL func_181(int iParam0) // Position - 0x801E
{
	if (Global_43377 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

BOOL func_182() // Position - 0x8040
{
	BOOL num;

	num = 0;

	if (iLocal_88 == 1)
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -179.10301f, -1682.4211f, 53.693f, -83.53208f, -1567.5836f, 25.187452f, 40.75f, false, false, 0))
			num = 1;
	else if (iLocal_88 == 2)
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 353.15063f, -296.19617f, 62.765713f, 210.46458f, -243.51062f, 46.13731f, 123.75f, false, true, 0))
			num = 1;
	else if (iLocal_88 == 3)
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -325.7037f, -829.31f, 30.5812f, true) < 105f)
			num = 1;

	return num;
}

BOOL func_183() // Position - 0x80F6
{
	if (!_CAN_ENTER_FREEROAM_STATE(5))
		return true;

	if (func_192())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_191())
			return false;

	if (func_184(100f, true) != -1)
		return true;

	return false;
}

int func_184(float fParam0, BOOL bParam1) // Position - 0x8158
{
	var unk;
	int num;
	int num2;
	float num3;
	float distanceBetweenCoords;
	int num4;
	int i;
	BOOL flag;

	num2 = -1;
	num3 = fParam0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_129(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			num4 = func_190();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_113810.f_18577[num /*6*/], 2) && !IS_BIT_SET(Global_113810.f_18577[num /*6*/], 3))
				{
					func_185(num, &unk);
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), unk.f_6, true);
				
					if (distanceBetweenCoords < num3)
					{
						flag = true;
					
						if (bParam1)
							if (num4 != unk.f_26)
								flag = false;
					
						if (flag)
						{
							num2 = num;
							num3 = distanceBetweenCoords;
						}
					}
				}
			}
		}
	}

	return num2;
}

void func_185(int iParam0, var uParam1) // Position - 0x8209
{
	switch (iParam0)
	{
		case 0:
			func_186(uParam1, "Abigail1", func_188(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
	
		case 1:
			func_186(uParam1, "Abigail2", func_188(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
	
		case 2:
			func_186(uParam1, "Barry1", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
	
		case 3:
			func_186(uParam1, "Barry2", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
	
		case 4:
			func_186(uParam1, "Barry3", func_188(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 5:
			func_186(uParam1, "Barry3A", func_188(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 6:
			func_186(uParam1, "Barry3C", func_188(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 7:
			func_186(uParam1, "Barry4", func_188(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_187(iParam0), 0, 0);
			break;
	
		case 8:
			func_186(uParam1, "Dreyfuss1", func_188(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 9:
			func_186(uParam1, "Epsilon1", func_188(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 10:
			func_186(uParam1, "Epsilon2", func_188(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
	
		case 11:
			func_186(uParam1, "Epsilon3", func_188(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 12:
			func_186(uParam1, "Epsilon4", func_188(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 13:
			func_186(uParam1, "Epsilon5", func_188(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
	
		case 14:
			func_186(uParam1, "Epsilon6", func_188(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 15:
			func_186(uParam1, "Epsilon7", func_188(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 16:
			func_186(uParam1, "Epsilon8", func_188(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
	
		case 17:
			func_186(uParam1, "Extreme1", func_188(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 18:
			func_186(uParam1, "Extreme2", func_188(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 19:
			func_186(uParam1, "Extreme3", func_188(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 20:
			func_186(uParam1, "Extreme4", func_188(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 21:
			func_186(uParam1, "Fanatic1", func_188(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_187(iParam0), 1, 0);
			break;
	
		case 22:
			func_186(uParam1, "Fanatic2", func_188(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_187(iParam0), 1, 0);
			break;
	
		case 23:
			func_186(uParam1, "Fanatic3", func_188(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_187(iParam0), 0, 1);
			break;
	
		case 24:
			func_186(uParam1, "Hao1", func_188(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_187(iParam0), 0, 1);
			break;
	
		case 25:
			func_186(uParam1, "Hunting1", func_188(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 26:
			func_186(uParam1, "Hunting2", func_188(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 27:
			func_186(uParam1, "Josh1", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
	
		case 28:
			func_186(uParam1, "Josh2", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
	
		case 29:
			func_186(uParam1, "Josh3", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
	
		case 30:
			func_186(uParam1, "Josh4", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
	
		case 31:
			func_186(uParam1, "Maude1", func_188(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 32:
			func_186(uParam1, "Minute1", func_188(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 33:
			func_186(uParam1, "Minute2", func_188(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 34:
			func_186(uParam1, "Minute3", func_188(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 35:
			func_186(uParam1, "MrsPhilips1", func_188(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 36:
			func_186(uParam1, "MrsPhilips2", func_188(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 37:
			func_186(uParam1, "Nigel1", func_188(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
	
		case 38:
			func_186(uParam1, "Nigel1A", func_188(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
	
		case 39:
			func_186(uParam1, "Nigel1B", func_188(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
	
		case 40:
			func_186(uParam1, "Nigel1C", func_188(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
	
		case 41:
			func_186(uParam1, "Nigel1D", func_188(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
	
		case 42:
			func_186(uParam1, "Nigel2", func_188(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
	
		case 43:
			func_186(uParam1, "Nigel3", func_188(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
	
		case 44:
			func_186(uParam1, "Omega1", func_188(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 45:
			func_186(uParam1, "Omega2", func_188(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 46:
			func_186(uParam1, "Paparazzo1", func_188(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 47:
			func_186(uParam1, "Paparazzo2", func_188(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 48:
			func_186(uParam1, "Paparazzo3", func_188(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 49:
			func_186(uParam1, "Paparazzo3A", func_188(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 50:
			func_186(uParam1, "Paparazzo3B", func_188(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 51:
			func_186(uParam1, "Paparazzo4", func_188(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 52:
			func_186(uParam1, "Rampage1", func_188(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 54:
			func_186(uParam1, "Rampage3", func_188(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
	
		case 55:
			func_186(uParam1, "Rampage4", func_188(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
	
		case 56:
			func_186(uParam1, "Rampage5", func_188(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
	
		case 53:
			func_186(uParam1, "Rampage2", func_188(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
	
		case 57:
			func_186(uParam1, "TheLastOne", func_188(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 58:
			func_186(uParam1, "Tonya1", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 59:
			func_186(uParam1, "Tonya2", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 60:
			func_186(uParam1, "Tonya3", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 61:
			func_186(uParam1, "Tonya4", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		case 62:
			func_186(uParam1, "Tonya5", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_186(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0x937E
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
	return;
}

int func_187(int iParam0) // Position - 0x940F
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

struct<2> func_188(int iParam0) // Position - 0x9755
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_189(iParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

struct<2> func_189(int iParam0) // Position - 0x978B
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON5", 8);
			break;
	
		default:
			break;
	}

	return unk;
}

int func_190() // Position - 0x9BD6
{
	func_128();

	switch (Global_113810.f_2366.f_539.f_4321)
	{
		case CHAR_MICHAEL:
			return 1;
	
		case CHAR_FRANKLIN:
			return 2;
	
		case CHAR_TREVOR:
			return 4;
	}

	return 0;
}

BOOL func_191() // Position - 0x9C1C
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_192() // Position - 0x9C39
{
	if (func_195() && !func_191())
		return true;

	if (func_194() && func_193())
		return true;

	return false;
}

BOOL func_193() // Position - 0x9C6B
{
	return Global_113528 > 0;
}

BOOL func_194() // Position - 0x9C79
{
	if (Global_97735 != -1)
		return true;

	return false;
}

BOOL func_195() // Position - 0x9C8E
{
	if (Global_97735 != -1)
		return IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 20);

	return false;
}

BOOL func_196() // Position - 0x9CB1
{
	if (Global_113799 == func_197() && MISC::GET_RANDOM_EVENT_FLAG() && Global_113800)
		return true;

	return false;
}

int func_197() // Position - 0x9CDC
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_198(unk);
	return num;
}

int func_198(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x9CF9
{
	switch (MISC::GET_HASH_KEY(&uParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
	
		case joaat("re_accident"):
			return 0;
	
		case joaat("re_arrests"):
			return 15;
	
		case joaat("re_atmrobbery"):
			return 1;
	
		case joaat("re_bikethief"):
			return 26;
	
		case joaat("re_border"):
			return 29;
	
		case joaat("re_burials"):
			return 24;
	
		case joaat("re_bus_tours"):
			return 2;
	
		case joaat("re_cartheft"):
			return 17;
	
		case joaat("re_chasethieves"):
			return 11;
	
		case joaat("re_crashrescue"):
			return 16;
	
		case joaat("re_cultshootout"):
			return 18;
	
		case joaat("re_dealgonewrong"):
			return 12;
	
		case joaat("re_domestic"):
			return 3;
	
		case joaat("re_drunkdriver"):
			return 27;
	
		case joaat("re_gang_intimidation"):
			return 20;
	
		case joaat("re_gangfight"):
			return 19;
	
		case joaat("re_getaway_driver"):
			return 4;
	
		case joaat("re_hitch_lift"):
			return 13;
	
		case joaat("re_homeland_security"):
			return 28;
	
		case joaat("re_lured"):
			return 7;
	
		case joaat("re_muggings"):
			return 25;
	
		case joaat("re_paparazzi"):
			return 10;
	
		case joaat("re_prisonerlift"):
			return 22;
	
		case joaat("re_prisonvanbreak"):
			return 21;
	
		case joaat("re_securityvan"):
			return 9;
	
		case joaat("re_shoprobbery"):
			return 5;
	
		case joaat("re_snatched"):
			return 6;
	
		case joaat("re_stag_do"):
			return 14;
	
		case joaat("re_yetarian"):
			return 30;
	
		case joaat("re_duel"):
			return 31;
	
		case joaat("re_seaplane"):
			return 32;
	
		case joaat("re_monkey"):
			return 33;
	}

	return -1;
}

void func_199() // Position - 0x9ED3
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);

	func_298(25, iLocal_88);
	func_203();
	func_200();
	func_280();
	return;
}

void func_200() // Position - 0x9F05
{
	func_201();
	return;
}

int func_201() // Position - 0x9F12
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		return 0;

	if (Global_100872.f_8)
		if (Global_100872.f_10 > 0)
			return 0;
	else if (Global_100872.f_10 > 1)
		return 0;

	Global_100872.f_10 = Global_100872.f_10 + 1;
	return 1;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x9F5D
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78938, 0);
}

int func_203() // Position - 0x9F85
{
	return 1;
}

void func_204(int iParam0) // Position - 0x9F8E
{
	Global_113796 = iParam0;
	return;
}

void func_205() // Position - 0x9F9C
{
	switch (iLocal_138)
	{
		case 0:
			if (!PED::IS_PED_INJURED(pedLocal_61))
				TASK::TASK_PLAY_ANIM(pedLocal_61, sLocal_357, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, false, false, false);
		
			if (!PED::IS_PED_INJURED(pedLocal_60))
				TASK::TASK_PLAY_ANIM(pedLocal_60, sLocal_359, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, false, false, false);
		
			iLocal_138 = iLocal_138 + 1;
			break;
	
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
			{
				if (!PED::IS_PED_INJURED(pedLocal_61))
				{
					if (func_182())
					{
						if (!HUD::DOES_BLIP_EXIST(blLocal_66))
						{
							if (!ENTITY::IS_ENTITY_DEAD(pedLocal_61, false))
								blLocal_66 = func_143(pedLocal_61, true, 0);
						
							if (!func_196())
								func_174(true);
						}
					}
				
					if (func_173())
					{
						_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, "REMG2_ARG", 4, 0, 0, 0);
						func_172();
						iLocal_185 = MISC::GET_GAME_TIMER();
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						bLocal_188 = true;
						iLocal_138 = iLocal_138 + 1;
					}
				}
				else if (!PED::IS_PED_INJURED(pedLocal_60))
				{
					TASK::TASK_SMART_FLEE_COORD(pedLocal_60, uLocal_143, 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_60, true);
					SYSTEM::WAIT(0);
					func_211();
				}
			}
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_210())
					iLocal_138 = 4;
			
				if (func_159())
					iLocal_138 = 9;
			
				if (func_209())
					iLocal_138 = 6;
			
				if (func_208())
					iLocal_138 = 4;
			}
		
			if (!func_196())
				if (func_183())
					func_280();
			break;
	
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
			{
				if (!PED::IS_PED_INJURED(pedLocal_61))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61, 6f, 6f, 15f, false, true, 0))
					{
						if (PED::CAN_PED_SEE_HATED_PED(pedLocal_61, PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61, 3f, 3f, 15f, false, true, 0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), pedLocal_61, 65f))
							{
								iLocal_187 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_61, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_110, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_138 = iLocal_138 + 1;
							}
							else
							{
								iLocal_187 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(pedLocal_61, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_110, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_138 = iLocal_138 + 1;
							}
						}
					}
				}
			}
		
			if (func_210() || func_208())
				iLocal_138 = 4;
		
			if (func_159())
				iLocal_138 = 9;
		
			if (func_209())
				iLocal_138 = 6;
			break;
	
		case 3:
			if (iLocal_186 - iLocal_187 > 12500)
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
					iLocal_138 = 4;
		
			if (iLocal_186 - iLocal_187 > 5500)
			{
				if (!bLocal_135)
				{
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
					{
						if (!PED::IS_PED_INJURED(pedLocal_61))
						{
							_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_112, 4, 0, 0, 0);
							TASK::TASK_COMBAT_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
							bLocal_135 = true;
						
							if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
							{
								if (!PED::IS_PED_INJURED(pedLocal_60))
								{
									TASK::TASK_SMART_FLEE_COORD(pedLocal_60, uLocal_143, 250f, -1, false, false);
									PED::SET_PED_KEEP_TASK(pedLocal_60, true);
									SYSTEM::WAIT(0);
								}
							
								!PED::IS_PED_INJURED(pedLocal_60);
							
								if (HUD::DOES_BLIP_EXIST(blLocal_63))
									HUD::REMOVE_BLIP(&blLocal_63);
							}
						}
					}
				}
			}
		
			if (bLocal_135)
			{
				iLocal_138 = 10;
			}
			else
			{
				if (func_210())
					iLocal_138 = 4;
			
				if (func_159())
					iLocal_138 = 9;
			
				if (func_209())
					iLocal_138 = 6;
			
				if (func_207())
					iLocal_138 = 9;
			
				if (func_208())
					iLocal_138 = 4;
			}
			break;
	
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
			{
				if (PED::IS_PED_INJURED(pedLocal_61) || func_38(PLAYER::PLAYER_PED_ID(), pedLocal_61, true) > 100f)
				{
					func_206();
					func_211();
				}
			}
			break;
	
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
			{
				if (!PED::IS_PED_INJURED(pedLocal_60))
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), true))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_60);
					
						if (!PED::IS_PED_INJURED(pedLocal_61))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
							TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_61, false), 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
							PED::SET_PED_KEEP_TASK(pedLocal_60, true);
						}
					
						bLocal_146 = true;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(pedLocal_60);
						TASK::TASK_SMART_FLEE_PED(pedLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_60, true);
					
						if (HUD::DOES_BLIP_EXIST(blLocal_63))
							HUD::REMOVE_BLIP(&blLocal_63);
					}
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
			{
				if (!PED::IS_PED_INJURED(pedLocal_61))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_61);
					TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_61, true);
				
					if (HUD::DOES_BLIP_EXIST(blLocal_64))
						HUD::REMOVE_BLIP(&blLocal_64);
				}
			}
		
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				func_109();
		
			SYSTEM::WAIT(0);
		
			if (!bLocal_146)
			{
				if (!PED::IS_PED_INJURED(pedLocal_61))
					_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, "REMG2_FKIT", 4, 0, 0, 0);
			
				func_280();
			}
			break;
	
		case 5:
			if (SYSTEM::TIMERB() > 250)
			{
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
				{
					if (!PED::IS_PED_INJURED(pedLocal_61))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_61, BF_AlwaysFlee, true);
						PED::SET_PED_RESET_FLAG(pedLocal_61, 156, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
						TASK::TASK_PERFORM_SEQUENCE(pedLocal_61, iLocal_119);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
						PED::SET_PED_KEEP_TASK(pedLocal_61, true);
						SYSTEM::WAIT(0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_61, false, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_61);
						_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_111, 4, 0, 0, 0);
					}
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
				{
					if (!PED::IS_PED_INJURED(pedLocal_60))
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), true))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_60);
							bLocal_146 = true;
						}
					}
				}
			
				if (!bLocal_146)
				{
					SYSTEM::WAIT(0);
					func_280();
				}
			}
			break;
	
		case 6:
			if (SYSTEM::TIMERA() > 500)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
					{
						if (!PED::IS_PED_INJURED(pedLocal_60))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_60);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
							PED::SET_PED_KEEP_TASK(pedLocal_60, true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_60);
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
					{
						if (!PED::IS_PED_INJURED(pedLocal_61))
						{
							_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_112, 4, 0, 0, 0);
							TASK::CLEAR_PED_TASKS(pedLocal_61);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_61, iLocal_119);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
							PED::SET_PED_KEEP_TASK(pedLocal_61, true);
						}
					}
				}
			
				SYSTEM::WAIT(0);
				func_280();
			}
			break;
	
		case 7:
			SYSTEM::SETTIMERA(0);
			iLocal_138 = iLocal_138 + 1;
			break;
	
		case 8:
			if (SYSTEM::TIMERA() > 200)
				func_211();
			break;
	
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
			{
				if (!PED::IS_PED_INJURED(pedLocal_61))
				{
					PED::SET_PED_RESET_FLAG(pedLocal_61, 156, true);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(pedLocal_61, 50f, 0);
				
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						func_109();
				
					SYSTEM::WAIT(0);
					_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_110, 4, 0, 0, 0);
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
			{
				if (!PED::IS_PED_INJURED(pedLocal_60))
				{
					TASK::CLEAR_PED_TASKS(pedLocal_60);
					TASK::TASK_COWER(pedLocal_60, 2000);
					bLocal_146 = true;
				}
			}
			break;
	}

	if (iLocal_138 != 8 && bLocal_146)
		iLocal_138 = 7;

	iLocal_186 = MISC::GET_GAME_TIMER();

	if (bLocal_188 && !bLocal_135)
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_61) && ENTITY::DOES_ENTITY_EXIST(pedLocal_61))
		{
			if (!PED::IS_PED_INJURED(pedLocal_60) && !PED::IS_PED_INJURED(pedLocal_61))
			{
				if (iLocal_186 - iLocal_185 > 12000 && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61, 3f, 3f, 35f, false, true, 0) && ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_61) && !_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
				{
					if (_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, "REMG2_FKIT", 4, 0, 0, 0) || func_62() || func_62())
					{
						PED::SET_PED_RESET_FLAG(pedLocal_61, 156, true);
						PED::SET_PED_SHOOTS_AT_COORD(pedLocal_61, PED::GET_PED_BONE_COORDS(pedLocal_60, 31086, 0f, 0f, 0f), false);
						TASK::CLEAR_PED_TASKS(pedLocal_60);
						ENTITY::SET_ENTITY_HEALTH(pedLocal_60, 99, 0);
						TASK::TASK_SMART_FLEE_COORD(pedLocal_61, uLocal_143, 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(pedLocal_61, true);
						func_280();
					}
				}
			}
		}
	}

	return;
}

void func_206() // Position - 0xA78F
{
	Global_20711 = 0;
	func_56();
	return;
}

BOOL func_207() // Position - 0xA79F
{
	if (!PED::IS_PED_INJURED(pedLocal_60) && !PED::IS_PED_INJURED(pedLocal_61))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60))
			return true;
	
		ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_61, 2f, 2f, 2f, false, true, 0);
	}

	return false;
}

BOOL func_208() // Position - 0xA7F2
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 20f, 20f, 20f, false, true, 0))
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60))
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					return true;
	else
		return true;

	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_61, false))
		if (func_159())
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				return true;
	else
		return true;

	return false;
}

BOOL func_209() // Position - 0xA880
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_60, 5.3f, 5.3f, 6f, false, true, 0))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedLocal_60, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(pedLocal_61))
					{
						if (!PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_61))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60))
							{
								SYSTEM::SETTIMERB(0);
								return true;
							}
						}
					}
					else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedLocal_60))
					{
						SYSTEM::SETTIMERB(0);
						return true;
					}
				}
			}
		}
	}

	return false;
}

BOOL func_210() // Position - 0xA93E
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_60, false))
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_60, 31086, 0f, 0f, 0f), 5f, true))
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				return true;

	return false;
}

void func_211() // Position - 0xA976
{
	if (!PED::IS_PED_INJURED(pedLocal_60))
	{
		if (!PED::IS_PED_RAGDOLL(pedLocal_60))
		{
			if (func_196())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_COWER) == 7)
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						func_109();
				
					if (!PED::IS_PED_INJURED(pedLocal_61))
						if (!PED::IS_PED_FLEEING(pedLocal_60))
							TASK::TASK_SMART_FLEE_PED(pedLocal_60, pedLocal_61, 150f, -1, false, false);
					else if (iLocal_45 == 3)
						if (!PED::IS_PED_FLEEING(pedLocal_60))
							TASK::TASK_SMART_FLEE_COORD(pedLocal_60, uLocal_120, 150f, -1, false, false);
				
					PED::SET_PED_KEEP_TASK(pedLocal_60, true);
					SYSTEM::WAIT(0);
					_CONVERSATION_ADD_LINE(&uLocal_192, sLocal_101, sLocal_107, 4, 0, 0, 0);
					SYSTEM::WAIT(0);
				
					if (iLocal_190 > 0)
					{
						PED::SET_PED_MONEY(PLAYER::PLAYER_PED_ID(), (iLocal_190 / 100) * 90);
						func_64(_GET_CURRENT_PLAYER_CHARACTER(), 1, iLocal_190);
						SYSTEM::WAIT(0);
						func_212(_GET_CURRENT_PLAYER_CHARACTER(), 1, iLocal_190 / 10, false, true);
					}
				
					func_204(3);
					func_199();
				}
			}
			else
			{
				func_280();
			}
		}
		else
		{
			func_280();
		}
	}
	else
	{
		func_280();
	}

	return;
}

void func_212(eCharacter echParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xAA84
{
	int outValue;
	Hash statHash;

	if (func_97(echParam0) == 3)
		return;

	if (func_97(echParam0) == 4)
		return;

	func_65(func_97(echParam0), 1, iParam1, iParam2, false);

	if (bParam3)
	{
		outValue = 0;
	
		if (bParam4)
		{
			switch (echParam0)
			{
				case CHAR_MICHAEL:
					statHash = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case CHAR_FRANKLIN:
					statHash = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				case CHAR_TREVOR:
					statHash = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
			
				default:
					return;
			}
		}
		else
		{
			switch (echParam0)
			{
				case CHAR_MICHAEL:
					statHash = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case CHAR_FRANKLIN:
					statHash = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
			
				case CHAR_TREVOR:
					statHash = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
			
				default:
					return;
			}
		}
	
		STATS::STAT_GET_INT(statHash, &outValue, -1);
		outValue = outValue + iParam2;
		STATS::STAT_SET_INT(statHash, outValue, true);
	}

	return;
}

BOOL func_213() // Position - 0xAB56
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_41) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_191())
			return false;
	}

	if (func_192())
		return true;

	if (func_184(100f, true) != -1)
		return true;

	return false;
}

BOOL func_214() // Position - 0xABDC
{
	func_225();
	func_224(&uLocal_391, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_224(&uLocal_391, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_224(&uLocal_391, sLocal_375);
	func_224(&uLocal_391, sLocal_359);
	func_222(&uLocal_391, hLocal_81);
	func_222(&uLocal_391, hLocal_82);
	func_222(&uLocal_391, hLocal_83);
	func_224(&uLocal_391, sLocal_358);
	func_224(&uLocal_391, sLocal_357);
	func_224(&uLocal_391, sLocal_376);
	func_224(&uLocal_391, "RANDOM@BICYCLE_THIEF@IDLE_A");

	if (func_218(&uLocal_391))
	{
		func_215();
		return true;
	}

	return false;
}

void func_215() // Position - 0xAC69
{
	pedLocal_60 = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_81, uLocal_67, fLocal_73, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_60, true);
	PED::SET_PED_CAN_BE_TARGETTED(pedLocal_60, false);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_60, 8, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_60, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_60, 512, true);
	AUDIO::STOP_PED_SPEAKING(pedLocal_60, true);
	PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(pedLocal_60);
	PED::SET_PED_MONEY(pedLocal_60, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(pedLocal_60, true);

	if (hLocal_81 == joaat("A_M_Y_GenStreet_01"))
	{
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_HEAD, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_UPPR, 0, 3, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_LOWR, 0, 2, 0);
	}

	if (hLocal_81 == joaat("A_M_Y_Business_02"))
	{
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_HEAD, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_HAIR, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_UPPR, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_LOWR, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(pedLocal_60, PV_COMP_ACCS, 0, 0, 0);
	}

	PED::ADD_RELATIONSHIP_GROUP("theAssailant", &hLocal_84);
	pedLocal_61 = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_82, uLocal_70, fLocal_76, true, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_61, true, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_61, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(pedLocal_61, true, 0);
	WEAPON::GIVE_WEAPON_TO_PED(pedLocal_61, joaat("WEAPON_PISTOL"), -1, true, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_61, BF_Aggressive, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_61, BF_AlwaysFlee, false);
	PED::SET_PED_DIES_WHEN_INJURED(pedLocal_61, true);
	PED::SET_PED_CONFIG_FLAG(pedLocal_61, 42, true);
	PED::SET_PED_CONFIG_FLAG(pedLocal_61, 137, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_61, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_61, 2, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_61, hLocal_84);
	AUDIO::STOP_PED_SPEAKING(pedLocal_61, true);

	if (!MISC::IS_STRING_NULL(sLocal_118))
		AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_60, sLocal_118);

	AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_61, sLocal_117);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVMALE"), hLocal_84);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVFEMALE"), hLocal_84);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_84, joaat("CIVMALE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, hLocal_84, joaat("CIVFEMALE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_84, joaat("PLAYER"));

	switch (_GET_CURRENT_PLAYER_CHARACTER())
	{
		case CHAR_MICHAEL:
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_192, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
	
		case CHAR_FRANKLIN:
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_192, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
	
		case CHAR_TREVOR:
			_CONVERSATION_INITIALIZE_ACTOR(&uLocal_192, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}

	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_192, 1, pedLocal_61, sLocal_116, 0, 1);
	_CONVERSATION_INITIALIZE_ACTOR(&uLocal_192, 2, pedLocal_60, sLocal_115, 0, 1);

	if (iLocal_45 == 2)
		PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_61, 1, false);

	if (iLocal_88 == 1 || iLocal_88 == 4)
		func_216();

	if (iLocal_88 == 3)
	{
		uLocal_123 = { -325.4189f, -828.8596f, 31.1f };
		fLocal_126 = { 0f, 0f, 180f };
		iLocal_129 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_123, fLocal_126, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_61, iLocal_129, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}

	if (iLocal_88 == 4)
		PATHFIND::DISABLE_NAVMESH_IN_AREA({ 28.5315f, -1027.5654f, 37.1197f } - { 1f, 1f, 1f }, { 28.5315f, -1027.5654f, 37.1197f } + { 1f, 1f, 1f }, true);

	return;
}

void func_216() // Position - 0xAF2A
{
	var animInitialOffsetRotation;

	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedLocal_61, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_357, sLocal_363, uLocal_369, uLocal_372, 0, 2), false, false, true);
	animInitialOffsetRotation = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_357, sLocal_363, uLocal_369, uLocal_372, 0, 2) };

	if (animInitialOffsetRotation.f_2 < 0f)
		animInitialOffsetRotation.f_2 = animInitialOffsetRotation.f_2 + 360f;

	ENTITY::SET_ENTITY_HEADING(pedLocal_61, animInitialOffsetRotation.f_2);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedLocal_60, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_357, sLocal_364, uLocal_369, uLocal_372, 0, 2), false, false, true);
	animInitialOffsetRotation = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_357, sLocal_364, uLocal_369, uLocal_372, 0, 2) };

	if (animInitialOffsetRotation.f_2 < 0f)
		animInitialOffsetRotation.f_2 = animInitialOffsetRotation.f_2 + 360f;

	ENTITY::SET_ENTITY_HEADING(pedLocal_60, animInitialOffsetRotation.f_2);
	TASK::TASK_PLAY_ANIM(pedLocal_61, sLocal_357, sLocal_363, 1000f, -1000f, -1, 9, 0, false, false, false);
	TASK::TASK_PLAY_ANIM(pedLocal_60, sLocal_357, sLocal_364, 1000f, -1000f, -1, 9, 0, false, false, false);
	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0xB020
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_78689)
	{
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, false);
			else
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, true);
	
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, false);
			else
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, true);
	}

	return;
}

BOOL func_218(var uParam0) // Position - 0xB0BB
{
	int i;

	if (!uParam0->f_271)
		return true;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
				return false;
		
			if (!func_219(&uParam0->[i /*18*/]))
				return false;
		}
	}

	uParam0->f_271 = 0;
	return true;
}

BOOL func_219(var uParam0) // Position - 0xB119
{
	return func_220(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

BOOL func_220(int iParam0, const char* sParam1, Hash hParam2) // Position - 0xB130
{
	if (IS_BIT_SET(iParam0, 30))
	{
		if (IS_BIT_SET(iParam0, 29))
		{
			switch (func_221(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(hParam2);
			
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
			
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
			
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
			
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(hParam2, sParam1);
			
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
			
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, IS_BIT_SET(iParam0, 27), -1);
			
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(hParam2);
			
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(hParam2);
			
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
			
				default:
					break;
			}
		}
		else
		{
			return false;
		}
	}

	return false;
}

int func_221(int iParam0) // Position - 0xB21B
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (IS_BIT_SET(iParam0, i))
			return i;
	}

	return -1;
}

void func_222(var uParam0, Hash hParam1) // Position - 0xB244
{
	func_223(uParam0, 0, hParam1, "NULL", 0);
	return;
}

void func_223(var uParam0, int iParam1, Hash hParam2, char* sParam3, int iParam4) // Position - 0xB258
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			if (IS_BIT_SET(uParam0->[i /*18*/], iParam1))
			{
				if (hParam2 != -1)
					if (uParam0->[i /*18*/].f_1 == hParam2)
						return;
			
				if (iParam1 != 4)
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
						if (MISC::ARE_STRINGS_EQUAL(&(uParam0->[i /*18*/].f_2), sParam3))
							return;
			
				if (iParam1 == 9)
					return;
			}
		}
	}

	if (!uParam0->f_271)
		uParam0->f_271 = 1;

	for (i = 0; i < 15; i = i + 1)
	{
		if (!IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->[i /*18*/].f_2), sParam3, 64);
			uParam0->[i /*18*/].f_1 = hParam2;
			uParam0->[i /*18*/] = iParam4;
			MISC::SET_BIT(&uParam0->[i /*18*/], iParam1);
			MISC::SET_BIT(&uParam0->[i /*18*/], 30);
			return;
		}
	}

	return;
}

void func_224(var uParam0, char* sParam1) // Position - 0xB339
{
	func_223(uParam0, 1, -1, sParam1, 0);
	return;
}

void func_225() // Position - 0xB34C
{
	func_278();
	MISC::SET_BIT(&iLocal_142, 3);
	MISC::SET_BIT(&iLocal_142, 4);
	MISC::SET_BIT(&iLocal_142, 1);

	if (iLocal_88 == 1)
	{
		sLocal_357 = "RANDOM@MUGGING1";
		sLocal_363 = "STRUGGLE_Loop_A_Thief";
		sLocal_364 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_366 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_365 = "FLEE_BACKWARD_Thief";
		sLocal_368 = "FLEE_FORWARD_Shopkeeper";
		sLocal_367 = "FLEE_FORWARD_Thief";
		func_227();
		iLocal_190 = 200;
		iLocal_46 = 2;
		uLocal_143 = { -132.2607f, -1628.3357f, 31.2107f };
		hLocal_81 = joaat("A_M_Y_Business_02");
		hLocal_82 = joaat("G_M_Y_StrPunk_01");
		uLocal_67 = { -138.814f, -1635.9751f, 31.357f };
		fLocal_73 = 318.519f;
		uLocal_70 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_76 = 98f;
		uLocal_369 = { uLocal_67 };
		uLocal_372 = { 0f, 0f, fLocal_73 };
		uLocal_164 = { -103.89513f, -1593.239f, 30.491978f };
		uLocal_167 = { -89.29615f, -1575.4436f, 32.30938f };
		uLocal_170 = { -152.03673f, -1654.3793f, 31.735992f };
		uLocal_173 = { -169.81827f, -1669.5555f, 33.941727f };
		uLocal_176 = { -152.03673f, -1654.3793f, 31.735992f };
		uLocal_179 = { -103.89513f, -1593.239f, 30.491978f };
		fLocal_77 = 340.0645f;
		uLocal_78 = { -151.0793f, -1650.322f, 31.6504f };
		uLocal_85 = { -133.6872f, -1630.2448f, 31.2527f };
		hLocal_83 = joaat("prop_ld_wallet_pickup");
		sLocal_101 = "REMG1AU";
		sLocal_102 = "REMG1_VIC";
		sLocal_103 = "REMG1_SHT";
		sLocal_104 = "REMG1_ASK";
		sLocal_105 = "REMG1_DRP";
		sLocal_106 = "REMG1_OHY";
		sLocal_107 = "REMG1_THK";
		sLocal_108 = "REMG1_GIV";
		sLocal_109 = "REMG1_MUGA";
		sLocal_110 = "REMG1_WHO";
	
		switch (_GET_CURRENT_PLAYER_CHARACTER())
		{
			case CHAR_MICHAEL:
				sLocal_113 = "REMG1_HOM";
				sLocal_114 = "REMG1_WAM";
				break;
		
			case CHAR_FRANKLIN:
				sLocal_113 = "REMG1_HOF";
				sLocal_114 = "REMG1_WAF";
				break;
		
			case CHAR_TREVOR:
				sLocal_113 = "REMG1_HOT";
				sLocal_114 = "REMG1_WAT";
				break;
		}
	
		sLocal_117 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_118 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_115 = "MuggedMan";
		sLocal_116 = "MuggerGang";
		bLocal_48 = true;
		sLocal_376 = "move_m@hurry@b";
	}

	if (iLocal_88 == 2)
	{
		sLocal_357 = "random@mugging2";
		sLocal_359 = "random@mugging2";
		iLocal_46 = 1;
		uLocal_143 = { 287.888f, -284.603f, 52.967f };
		hLocal_81 = joaat("A_F_Y_GenHot_01");
		hLocal_82 = joaat("G_M_Y_StrPunk_01");
		uLocal_67 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_73 = 260.7569f;
		uLocal_70 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_76 = 45f;
		fLocal_77 = 251f;
		uLocal_78 = { 297.4484f, -261.2914f, 53.0037f };
		hLocal_83 = joaat("prop_ld_handbag");
		sLocal_101 = "REMG2AU";
		sLocal_102 = "REMG2_VIC";
		sLocal_103 = "REMG2_SHT";
		sLocal_104 = "REMG2_ASK";
		sLocal_105 = "REMG2_DRP";
		sLocal_106 = "REMG2_OHY";
		sLocal_107 = "REMG2_THK";
		sLocal_108 = "REMG2_GIV";
		sLocal_110 = "REMG2_WHO";
		sLocal_111 = "REMG2_GUN";
		sLocal_112 = "REMG2_FUT";
	
		switch (_GET_CURRENT_PLAYER_CHARACTER())
		{
			case CHAR_MICHAEL:
				sLocal_113 = "REMG2_HOM";
				sLocal_114 = "REMG2_WAM";
				break;
		
			case CHAR_FRANKLIN:
				sLocal_113 = "REMG2_HOF";
				sLocal_114 = "REMG2_WAF";
				break;
		
			case CHAR_TREVOR:
				sLocal_113 = "REMG2_HOT";
				sLocal_114 = "REMG2_WAT";
				break;
		}
	
		sLocal_117 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_115 = "MuggedYMan";
		sLocal_116 = "MuggerGang";
		bLocal_48 = true;
		sLocal_376 = "move_m@hurry@b";
	}

	if (iLocal_45 == 1)
	{
		func_226();
		iLocal_190 = 2000;
		iLocal_46 = 2;
	
		if (iLocal_88 == 3)
		{
			sLocal_357 = "RANDOM@MUGGING3";
			uLocal_143 = { -317.1964f, -824.0751f, 31.4284f };
			hLocal_81 = joaat("A_F_Y_Hipster_01");
			hLocal_82 = joaat("A_M_O_Tramp_01");
			uLocal_67 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_73 = 80.7161f;
			uLocal_70 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_76 = 336.5502f;
			fLocal_77 = 81.8694f;
			uLocal_78 = { -322.3941f, -835.7213f, 30.6001f };
			uLocal_85 = { -320.9667f, -832.1209f, 30.5979f };
			hLocal_83 = joaat("prop_ld_purse_01");
			sLocal_101 = "REMG3AU";
			sLocal_102 = "REMG3_VIC";
			sLocal_103 = "REMG3_SHT";
			sLocal_104 = "REMG3_ASK";
			sLocal_105 = "REMG3_DRP";
			sLocal_106 = "REMG3_OHY";
			sLocal_107 = "REMG3_THK";
			sLocal_108 = "REMG3_GIV";
			sLocal_109 = "REMG3_MUGB";
			sLocal_110 = "REMG3_WHO";
			sLocal_111 = "REMG3_GUN";
			sLocal_112 = "REMG3_FUT";
		
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					sLocal_113 = "REMG3_HOM";
					sLocal_114 = "REMG3_WAM";
					break;
			
				case CHAR_FRANKLIN:
					sLocal_113 = "REMG3_HOF";
					sLocal_114 = "REMG3_WAF";
					break;
			
				case CHAR_TREVOR:
					sLocal_113 = "REMG3_HOT";
					sLocal_114 = "REMG3_WAT";
					break;
			}
		
			sLocal_117 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_115 = "MUGGEDHIPSTER";
			sLocal_116 = "MuggerTramp";
			bLocal_48 = true;
			sLocal_376 = "move_f@hurry@a";
		}
	
		if (iLocal_88 == 4)
		{
			func_226();
			sLocal_357 = "RANDOM@MUGGING4";
			sLocal_363 = "STRUGGLE_Loop_B_Thief";
			sLocal_364 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_366 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_365 = "FLEE_BACKWARD_Thief";
			sLocal_368 = "FLEE_FORWARD_Shopkeeper";
			sLocal_367 = "FLEE_FORWARD_Thief";
			uLocal_143 = { 32.8802f, -1016.0609f, 28.4527f };
			hLocal_81 = joaat("A_F_M_Tourist_01");
			hLocal_82 = joaat("G_M_Y_ArmGoon_02");
			uLocal_67 = { 32.2169f, -1020.8641f, 28.456f };
			fLocal_73 = 159.1445f;
			uLocal_369 = { uLocal_67 };
			uLocal_372 = { 0f, 0f, fLocal_73 };
			uLocal_70 = { 38.1933f, -1023.5788f, 28.4889f };
			fLocal_76 = 60.1372f;
			fLocal_77 = 248f;
			uLocal_78 = { 42.5323f, -990.353f, 28.248f };
			uLocal_164 = { 38.151863f, -1001.48535f, 28.422756f };
			uLocal_167 = { 40.136692f, -995.2711f, 30.371975f };
			uLocal_170 = { 37.217583f, -1040.3536f, 28.41506f };
			uLocal_173 = { 19.914917f, -1036.814f, 30.280445f };
			uLocal_176 = { 28.4511f, -1035.7179f, 28.3329f };
			uLocal_179 = { 38.6536f, -1001.0728f, 28.407f };
			uLocal_85 = { 32.536f, -1020.2932f, 28.4576f };
			hLocal_83 = joaat("prop_ld_wallet_pickup");
			sLocal_101 = "REMG4AU";
			sLocal_102 = "REMG4_VIC";
			sLocal_103 = "REMG4_SHT";
			sLocal_104 = "REMG4_ASK";
			sLocal_105 = "REMG4_DRP";
			sLocal_106 = "REMG4_OHY";
			sLocal_107 = "REMG4_THK";
			sLocal_108 = "REMG4_GIV";
			sLocal_109 = "REMG4_MUGB";
			sLocal_110 = "REMG4_WHO";
			sLocal_111 = "REMG4_GUN";
			sLocal_112 = "REMG4_FUT";
		
			switch (_GET_CURRENT_PLAYER_CHARACTER())
			{
				case CHAR_MICHAEL:
					sLocal_113 = "REMG4_HOM";
					sLocal_114 = "REMG4_WAM";
					break;
			
				case CHAR_FRANKLIN:
					sLocal_113 = "REMG4_HOF";
					sLocal_114 = "REMG4_WAF";
					break;
			
				case CHAR_TREVOR:
					sLocal_113 = "REMG4_HOT";
					sLocal_114 = "REMG4_WAT";
					break;
			}
		
			sLocal_117 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_115 = "MuggedWoman";
			sLocal_116 = "MuggerGang";
			bLocal_48 = true;
			sLocal_376 = "move_f@hurry@a";
		}
	}

	return;
}

void func_226() // Position - 0xB9DB
{
	sLocal_359 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";

	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_360 = "Return_Wallet_Positive_A_Player";
			sLocal_361 = "Return_Wallet_Positive_A_Female";
			sLocal_362 = "Return_Wallet_Positive_A_Cam";
			break;
	
		case 1:
			sLocal_360 = "Return_Wallet_Positive_B_Player";
			sLocal_361 = "Return_Wallet_Positive_B_Female";
			sLocal_362 = "Return_Wallet_Positive_B_Cam";
			break;
	
		case 2:
			sLocal_360 = "Return_Wallet_Positive_C_Player";
			sLocal_361 = "Return_Wallet_Positive_C_Female";
			sLocal_362 = "Return_Wallet_Positive_C_Cam";
			break;
	}

	return;
}

void func_227() // Position - 0xBA4F
{
	sLocal_359 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";

	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_360 = "Return_Wallet_Positive_A_Player";
			sLocal_361 = "Return_Wallet_Positive_A_Male";
			sLocal_362 = "Return_Wallet_Positive_A_Cam";
			break;
	
		case 1:
			sLocal_360 = "Return_Wallet_Positive_B_Player";
			sLocal_361 = "Return_Wallet_Positive_B_Male";
			sLocal_362 = "Return_Wallet_Positive_B_Cam";
			break;
	
		case 2:
			sLocal_360 = "Return_Wallet_Positive_C_Player";
			sLocal_361 = "Return_Wallet_Positive_C_Male";
			sLocal_362 = "Return_Wallet_Positive_C_Cam";
			break;
	}

	return;
}

void func_228(Blip blParam0, var uParam1) // Position - 0xBAC3
{
	int value;
	int num;

	if (*uParam1 == -99)
		*uParam1 = MISC::GET_GAME_TIMER();

	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		value = MISC::GET_GAME_TIMER() - *uParam1;
	
		if (value < 5000)
		{
			num = SYSTEM::CEIL(SYSTEM::TO_FLOAT(value) / 1000f);
		
			if ((num * 1000) - value < 500)
				if (HUD::GET_BLIP_ALPHA(blParam0) != 255)
					HUD::SET_BLIP_ALPHA(blParam0, 255);
			else if (HUD::GET_BLIP_ALPHA(blParam0) != 0)
				HUD::SET_BLIP_ALPHA(blParam0, 0);
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
		
			if (HUD::GET_BLIP_ALPHA(blParam0) != 255)
				HUD::SET_BLIP_ALPHA(blParam0, 255);
		}
	}

	return;
}

void func_229(var uParam0) // Position - 0xBB62
{
	int i;

	if (uParam0->f_271)
	{
		if (MISC::GET_FRAME_COUNT() >= uParam0->f_272 + uParam0->f_273 || IS_BIT_SET(Global_100833.f_20, 2) || IS_BIT_SET(Global_100833.f_20, 13))
		{
			for (i = 0; i < 15; i = i + 1)
			{
				if (IS_BIT_SET(uParam0->[i /*18*/], 30))
				{
					if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
					{
						func_230(&uParam0->[i /*18*/]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
			}
		}
	}

	return;
}

void func_230(int* piParam0) // Position - 0xBBE4
{
	func_231(piParam0, &(piParam0->f_2), piParam0->f_1);
	return;
}

void func_231(int* piParam0, const char* sParam1, Hash hParam2) // Position - 0xBBFA
{
	if (IS_BIT_SET(*piParam0, 30))
	{
		switch (func_221(*piParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(hParam2);
				break;
		
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
		
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
		
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, IS_BIT_SET(*piParam0, 28));
				break;
		
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(hParam2, sParam1);
				break;
		
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
		
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, IS_BIT_SET(*piParam0, 27), -1);
				break;
		
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(hParam2);
				break;
		
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, hParam2);
				break;
		
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
		
			default:
				break;
		}
	
		MISC::SET_BIT(piParam0, 29);
	}

	return;
}

void func_232(int iParam0) // Position - 0xBCCB
{
	if (iParam0 == -1)
		iParam0 = func_197();

	if (iParam0 == -1)
		return;

	func_234(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113796 = 0;
	func_233();
	return;
}

void func_233() // Position - 0xBD01
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_234(int iParam0) // Position - 0xBD3E
{
	Global_113799 = iParam0;
	return;
}

BOOL func_235(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xBD4C
{
	BOOL flag;
	Vector3 entityCoords;
	eCharacter i;
	Vector3 vector;
	int num;

	if (!Global_152397)
		return false;

	if (iParam3 == -1)
		iParam3 = func_197();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	uLocal_41 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_191())
				return false;
		}
	
		if (!Global_113810.f_9088)
			return false;
	
		if (_IS_MISSION_REPEAT_ACTIVE(false))
			return false;
	
		if (func_192())
			return false;
	
		if (func_274())
			return false;
	
		if (Global_113799 != -1)
			return false;
	
		if (func_129(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_184(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_41.f_2 > 50f)
				return false;
	
		if (!func_273(iParam3))
			return false;
	
		if (func_129(_GET_CURRENT_PLAYER_CHARACTER()))
			if (func_272(_GET_CURRENT_PLAYER_CHARACTER()) == 4 || func_272(_GET_CURRENT_PLAYER_CHARACTER()) == 5)
				return false;
	
		if (func_129(_GET_CURRENT_PLAYER_CHARACTER()))
			if (!func_271(iParam3, iParam4, 145))
				return false;
	
		if (!func_270(Global_113810.f_24998.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_113801 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_269())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_260(4))
			return false;
	
		if (!_CAN_ENTER_FREEROAM_STATE(5))
			return false;
	
		if (func_259(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_3 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_259(0, 0))
			return false;
	
		if (Global_32430)
			return false;
	
		if (func_273(30) && !func_259(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_129(_GET_CURRENT_PLAYER_CHARACTER()))
		{
			for (i = CHAR_MICHAEL; i < CHAR_MULTIPLAYER; i = i + 1)
			{
				vector = { Global_113810.f_2366.f_539.f_2300[i /*3*/] };
				num = Global_113810.f_2366.f_539.f_2296[i];
			
				if (func_258(num))
					if (func_236(i))
						if (!func_28(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (_GET_CURRENT_PLAYER_CHARACTER() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_236(eCharacter echParam0) // Position - 0xC0E8
{
	int num;

	num = Global_113810.f_2366.f_539.f_2296[echParam0];
	return func_237(num);
}

BOOL func_237(int iParam0) // Position - 0xC109
{
	return func_238(iParam0, 1);
}

int func_238(int iParam0, int iParam1) // Position - 0xC118
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_258(iParam0))
		return 0;

	func_239(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_239(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xC16B
{
	func_240(func_251(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_240(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xC189
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_250(iParam0, iParam1))
	{
		num = func_249(iParam1);
		num2 = func_247(iParam0);
		num3 = func_247(iParam0) - func_247(iParam1);
		num4 = func_249(iParam0) - func_249(iParam1);
		num5 = func_246(iParam0) - func_246(iParam1);
		num6 = func_245(iParam0) - func_245(iParam1);
		num7 = func_244(iParam0) - func_244(iParam1);
		num8 = func_243(iParam0) - func_243(iParam1);
	}
	else
	{
		num = func_249(iParam0);
		num2 = func_247(iParam1);
		num3 = func_247(iParam1) - func_247(iParam0);
		num4 = func_249(iParam1) - func_249(iParam0);
		num5 = func_246(iParam1) - func_246(iParam0);
		num6 = func_245(iParam1) - func_245(iParam0);
		num7 = func_244(iParam1) - func_244(iParam0);
		num8 = func_243(iParam1) - func_243(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_242(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_241(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

float func_241(float fParam0, float fParam1, float fParam2) // Position - 0xC38A
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)SYSTEM::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_242(int iParam0, int iParam1) // Position - 0xC3CC
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_243(int iParam0) // Position - 0xC46E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_244(int iParam0) // Position - 0xC481
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_245(int iParam0) // Position - 0xC494
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_246(int iParam0) // Position - 0xC4A7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_247(int iParam0) // Position - 0xC4B9
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_248(BOOL bParam0, var uParam1, var uParam2) // Position - 0xC4DB
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_249(int iParam0) // Position - 0xC4F2
{
	return iParam0 & 15;
}

BOOL func_250(int iParam0, int iParam1) // Position - 0xC4FF
{
	int num;
	int num2;

	if (!func_258(iParam1) || !func_258(iParam0))
		return 1;

	num = func_247(iParam0);
	num2 = func_247(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_249(iParam0);
	num2 = func_249(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_246(iParam0);
	num2 = func_246(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_245(iParam0);
	num2 = func_245(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_244(iParam0);
	num2 = func_244(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_243(iParam0);
	num2 = func_243(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_251() // Position - 0xC60B
{
	var unk;

	func_257(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_256(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_255(&unk, CLOCK::GET_CLOCK_HOURS());
	func_254(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_253(&unk, CLOCK::GET_CLOCK_MONTH());
	func_252(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_252(var uParam0, int iParam1) // Position - 0xC651
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_253(var uParam0, int iParam1) // Position - 0xC6D7
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_254(var uParam0, int iParam1) // Position - 0xC70A
{
	int num;
	int num2;

	num = func_249(*uParam0);
	num2 = func_247(*uParam0);

	if (iParam1 < 1 || iParam1 > func_242(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_255(var uParam0, int iParam1) // Position - 0xC75B
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_256(var uParam0, int iParam1) // Position - 0xC795
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_257(var uParam0, int iParam1) // Position - 0xC7D0
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_258(int iParam0) // Position - 0xC80C
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_243(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_244(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_245(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_247(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_249(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_246(iParam0);

	if (num6 < 1 || num6 > func_242(num5, num4))
		return false;

	return true;
}

BOOL func_259(int iParam0, int iParam1) // Position - 0xC8E8
{
	if (IS_BIT_SET(Global_113810.f_24998.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_260(int iParam0) // Position - 0xC908
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER();
			
				if (!func_129(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_268() || Global_112857 || Global_32286 || func_267() || func_55(8, -1) || func_266() || func_265() || func_264() || func_263() || Global_113810.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_268() || Global_32286 || func_267() || func_55(8, -1) || func_264() || func_266() || func_265() || func_263() || Global_113810.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_268() || Global_112857 || Global_32286 || func_267() || func_55(8, -1) || func_264() || func_266() || func_265() || func_263() || Global_113810.f_7691.f_919[character] == 5 || Global_43924 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_268() || Global_112857 || Global_32286 || func_267() || func_55(8, -1) || func_266() || func_265() || func_263() || Global_113810.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_268() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_55(8, -1) || func_263() || func_262() || Global_113810.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_55(8, -1) || func_266() || func_265() || func_262() || func_261())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_268() || Global_32286 || func_267() || func_55(8, -1) || func_265() || func_264() || func_263() || Global_113810.f_7691.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_268() || func_265() || Global_112857 || Global_32286 || func_267() || Global_44569 || func_55(8, -1) || func_264() || func_262() || func_263() || Global_113810.f_7691.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_268() || Global_112857 || Global_32286 || func_267() || func_55(8, -1) || func_264() || func_262() || func_266() || func_265() || func_263())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_261() // Position - 0xD025
{
	return Global_100872.f_1;
}

BOOL func_262() // Position - 0xD033
{
	if (Global_97735 != -1)
		return IS_BIT_SET(Global_91601[Global_97735 /*34*/].f_15, 13);

	return false;
}

BOOL func_263() // Position - 0xD056
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_264() // Position - 0xD070
{
	if (Global_78950)
		return true;
	else if (Global_63479 && !Global_63485)
		return true;

	return false;
}

BOOL func_265() // Position - 0xD09A
{
	return Global_100885.f_394 > 0;
}

BOOL func_266() // Position - 0xD0AB
{
	return Global_100885.f_393 > 0;
}

BOOL func_267() // Position - 0xD0BC
{
	return Global_1575063;
}

BOOL func_268() // Position - 0xD0C8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98291.f_44 == 1;

	return false;
}

BOOL func_269() // Position - 0xD0E4
{
	_UPDATE_CURRENT_PLAYER_CHARACTER();

	if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_270(int iParam0) // Position - 0xD10C
{
	return func_250(func_251(), iParam0);
}

BOOL func_271(int iParam0, int iParam1, eCharacter echParam2) // Position - 0xD11E
{
	BOOL num;
	eCharacter character;

	num = 0;
	character = _GET_CURRENT_PLAYER_CHARACTER();

	if (echParam2 != 145 && echParam2 == 0 || echParam2 == 1 || echParam2 == 2)
		character = echParam2;

	switch (iParam0)
	{
		case 18:
			if (character == CHAR_TREVOR)
				num = 1;
			break;
	
		case 19:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 20:
			if (character != CHAR_FRANKLIN)
				num = 1;
			break;
	
		case 28:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 13:
			if (character == CHAR_MICHAEL)
				if (iParam1 == 2)
					num = 0;
				else
					num = 1;
			else
				num = 1;
			break;
	
		case 22:
			if (iParam1 == 2 || character != CHAR_TREVOR)
				num = 1;
			break;
	
		case 30:
			if (character != CHAR_TREVOR)
				num = 1;
			break;
	
		default:
			num = 1;
			break;
	}

	return num;
}

int func_272(eCharacter echParam0) // Position - 0xD202
{
	if (!func_129(echParam0))
		return 7;

	return Global_113810.f_7691.f_919[echParam0];
}

BOOL func_273(int iParam0) // Position - 0xD226
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!_IS_EXCLUSIVE_CONTENT_UNLOCKED())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_113810.f_24998, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_113810.f_24998.f_1, num);
	}

	return flag;
}

BOOL func_274() // Position - 0xD27E
{
	Vehicle vehiclePedIsIn;

	if (Global_32435)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 0, false)))
					return true;
		}
	}

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0xD2C2
{
	int profileSetting;

	if (Global_152686 == 2)
		return true;
	else if (Global_152686 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

BOOL func_276(int iParam0) // Position - 0xD37A
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113810.f_18577[iParam0 /*6*/], 3);
}

BOOL func_277(int iParam0) // Position - 0xD3A5
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113810.f_18577[iParam0 /*6*/], 0);
}

void func_278() // Position - 0xD3D0
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (SYSTEM::VDIST(uLocal_120, uLocal_89) < 20f)
		{
			iLocal_88 = 1;
			iLocal_45 = 2;
		}
	
		if (SYSTEM::VDIST(uLocal_120, uLocal_92) < 20f)
		{
			iLocal_88 = 2;
			iLocal_45 = 3;
		}
	
		if (SYSTEM::VDIST(uLocal_120, uLocal_95) < 20f)
		{
			iLocal_88 = 3;
			iLocal_45 = 1;
		}
	
		if (SYSTEM::VDIST(uLocal_120, uLocal_98) < 20f)
		{
			iLocal_88 = 4;
			iLocal_45 = 1;
		}
	}

	return;
}

void func_279(var uParam0, int iParam1) // Position - 0xD44F
{
	if (iParam1 > 0)
		uParam0->f_273 = iParam1;

	return;
}

void func_280() // Position - 0xD467
{
	if (bLocal_154)
	{
		if (bLocal_48)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_81);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_82);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_83);
		}
	
		if (!PED::IS_PED_INJURED(pedLocal_61))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				TASK::TASK_SMART_FLEE_PED(pedLocal_61, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
		
			PED::SET_PED_KEEP_TASK(pedLocal_61, true);
		
			if (!bLocal_58)
				PED::SET_PED_MONEY(pedLocal_61, iLocal_190);
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_60))
		{
			if (!PED::IS_PED_INJURED(pedLocal_60))
			{
				PED::SET_PED_CAN_BE_TARGETTED(pedLocal_60, true);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_WANDER_STANDARD) == 7 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_60, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_119);
				
					if (PED::IS_PED_DUCKING(pedLocal_60))
						TASK::TASK_TOGGLE_DUCK(0, 0);
				
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
					TASK::TASK_SMART_FLEE_COORD(0, uLocal_120, 250f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_119);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_60, iLocal_119);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_119);
					PED::SET_PED_KEEP_TASK(pedLocal_60, true);
				
					if (!bLocal_152 && !bLocal_146)
						if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							func_109();
				}
			}
		}
	
		SYSTEM::WAIT(0);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_64))
			HUD::REMOVE_BLIP(&blLocal_64);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_63))
			HUD::REMOVE_BLIP(&blLocal_63);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_62))
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_62);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_65))
			HUD::REMOVE_BLIP(&blLocal_65);
	}

	if (iLocal_377 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_377))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_377);
	
		iLocal_377 = -1;
	}

	if (func_196())
	{
		PED::SET_CREATE_RANDOM_COPS(true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}

	func_37(&uLocal_378, 0, false);
	func_113(false, true, true, false, false, false, false);
	func_286(-1);
	func_281(&uLocal_391, false);

	if (shLocal_139 != 0)
		EVENT::REMOVE_SHOCKING_EVENT(shLocal_139);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_281(var uParam0, BOOL bParam1) // Position - 0xD60C
{
	int i;

	if (!bParam1)
		func_283(uParam0);

	for (i = 0; i < 15; i = i + 1)
	{
		func_282(&uParam0->[i /*18*/]);
	}

	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
	return;
}

void func_282(var uParam0) // Position - 0xD64F
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_2), "NULL", 64);
	return;
}

void func_283(var uParam0) // Position - 0xD668
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
			func_284(&uParam0->[i /*18*/]);
	}

	uParam0->f_271 = 1;
	return;
}

void func_284(var uParam0) // Position - 0xD69F
{
	func_285(*uParam0, &(uParam0->f_2), uParam0->f_1);
	return;
}

void func_285(int iParam0, const char* sParam1, Hash hParam2) // Position - 0xD6B6
{
	if (IS_BIT_SET(iParam0, 30))
	{
		switch (func_221(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hParam2);
				break;
		
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
		
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
		
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
		
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(hParam2, sParam1);
				break;
		
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
		
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
		
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(hParam2);
				break;
		
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(hParam2, IS_BIT_SET(iParam0, 26));
				break;
		
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_286(int iParam0) // Position - 0xD770
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_197();

	if (iParam0 == -1)
		return;

	if (func_196())
	{
		func_291(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113801 = MISC::GET_GAME_TIMER();
		func_290(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_289(Global_113799, true), 64);
	
		if (func_288(Global_113799) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_113798, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_113796, MISC::GET_GAME_TIMER() - Global_113797, 0);
	}
	else if (IS_BIT_SET(Global_113806, 0) && Global_113810.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113806, 0);
	}

	func_287(&Global_32343);
	Global_113800 = false;
	func_234(-1);
	return;
}

void func_287(var uParam0) // Position - 0xD822
{
	if (*uParam0 == -1)
		return;

	if (!(*uParam0 == Global_43339))
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_43338 = 0;
	Global_43340 = 0;
	Global_43377 = 15;
	Global_63482 = 0;
	Global_63483 = 0;
	return;
}

int func_288(int iParam0) // Position - 0xD85F
{
	int num;

	num = 1;

	switch (iParam0)
	{
		case 1:
			num = 5;
			break;
	
		case 5:
			num = 2;
			break;
	
		case 9:
			num = 10;
			break;
	
		case 11:
			num = 4;
			break;
	
		case 13:
			num = 4;
			break;
	
		case 15:
			num = 2;
			break;
	
		case 17:
			num = 2;
			break;
	
		case 22:
			num = 2;
			break;
	
		case 23:
			num = 2;
			break;
	
		case 25:
			num = 3;
			break;
	
		case 26:
			num = 2;
			break;
	
		case 27:
			num = 2;
			break;
	
		case 29:
			num = 3;
			break;
	}

	return num;
}

char* func_289(int iParam0, BOOL bParam1) // Position - 0xD910
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
	
		case 1:
			return "RE_ATMROBBERY";
	
		case 2:
			return "RE_BUSTOUR";
	
		case 3:
			return "RE_DOMESTIC";
	
		case 4:
			return "RE_GETAWAYDRIVER";
	
		case 5:
			return "RE_SHOPROBBERY";
	
		case 6:
			return "RE_SNATCHED";
	
		case 7:
			return "RE_LURED";
	
		case 8:
			return "RE_BIKETHIEFSTAMP";
	
		case 9:
			return "RE_SECURITYVAN";
	
		case 10:
			return "RE_PAPARAZZI";
	
		case 11:
			return "RE_CHASETHIEVES";
	
		case 12:
			return "RE_DEALGONEWRONG";
	
		case 13:
			return "RE_HITCHLIFT";
	
		case 14:
			return "RE_STAG";
	
		case 15:
			return "RE_ARREST";
	
		case 16:
			return "RE_CRASHRESCUE";
	
		case 17:
			return "RE_CARTHEFT";
	
		case 18:
			return "RE_CULTSHOOTOUT";
	
		case 19:
			return "RE_GANGFIGHT";
	
		case 20:
			return "RE_GANGINTIMIDATION";
	
		case 21:
			return "RE_PRISONVANBREAK";
	
		case 22:
			return "RE_PRISONERLIFT";
	
		case 23:
			return "RE_ABANDONEDCAR";
	
		case 24:
			return "RE_BURIAL";
	
		case 25:
			return "RE_MUGGING";
	
		case 26:
			return "RE_BIKETHIEF";
	
		case 27:
			return "RE_DRUNKDRIVER";
	
		case 28:
			return "RE_HOMELANDSECURITY";
	
		case 29:
			return "RE_BORDERPATROL";
	
		case 30:
			return "RE_SIMEONYETARIAN";
	
		case 31:
			return "RE_DUEL";
	
		case 32:
			return "RE_SEAPLANE";
	
		case 33:
			return "RE_MONKEYPHOTO";
	
		case -1:
			return "RE_NONE";
	}

	!bParam1;
	return "UNKNOWN";
}

void func_290(int iParam0) // Position - 0xDB59
{
	Global_43928 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_291(int iParam0) // Position - 0xDB6B
{
	func_292(iParam0, 0, func_297(iParam0));
	return;
}

void func_292(int iParam0, int iParam1, int iParam2) // Position - 0xDB80
{
	int unk;
	var unk2;

	unk = func_251();
	func_295(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_294(iParam0, &unk);
	unk2 = { func_293(&unk) };
	return;
}

struct<16> func_293(var uParam0) // Position - 0xDBAF
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_245(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_244(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_243(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_246(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_249(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_247(*uParam0), 64);
	return unk;
}

void func_294(int iParam0, var uParam1) // Position - 0xDC7E
{
	Global_113810.f_24998.f_43[iParam0] = *uParam1;
	return;
}

void func_295(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xDC96
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_247(*uParam0);
	i = func_249(*uParam0);
	num2 = func_246(*uParam0);
	j = func_245(*uParam0);
	k = func_244(*uParam0);
	l = func_243(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_242(i, num); num2 > m; m = func_242(i, num))
	{
		i = i + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			num = num + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num + iParam6;
	func_296(uParam0, l, k, j, num2, i, num);
	return;
}

void func_296(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xDE18
{
	func_257(uParam0, iParam1);
	func_256(uParam0, iParam2);
	func_255(uParam0, iParam3);
	func_253(uParam0, iParam5);
	func_254(uParam0, iParam4);
	func_252(uParam0, iParam6);
	return;
}

int func_297(int iParam0) // Position - 0xDE50
{
	int num;

	switch (iParam0)
	{
		case 23:
			num = 30;
			break;
	
		case 0:
			num = 30;
			break;
	
		case 15:
			num = 30;
			break;
	
		case 1:
			num = 200;
			break;
	
		case 26:
			num = 30;
			break;
	
		case 8:
			num = 30;
			break;
	
		case 29:
			num = 30;
			break;
	
		case 24:
			num = 30;
			break;
	
		case 2:
			num = 0;
			break;
	
		case 17:
			num = 30;
			break;
	
		case 11:
			num = 30;
			break;
	
		case 16:
			num = 30;
			break;
	
		case 18:
			num = 30;
			break;
	
		case 12:
			num = 120;
			break;
	
		case 3:
			num = 60;
			break;
	
		case 27:
			num = 60;
			break;
	
		case 19:
			num = 30;
			break;
	
		case 20:
			num = 30;
			break;
	
		case 4:
			num = 60;
			break;
	
		case 28:
			num = 30;
			break;
	
		case 13:
			num = 35;
			break;
	
		case 7:
			num = 30;
			break;
	
		case 25:
			num = 40;
			break;
	
		case 10:
			num = 30;
			break;
	
		case 22:
			num = 30;
			break;
	
		case 21:
			num = 30;
			break;
	
		case 5:
			num = 30;
			break;
	
		case 30:
			num = 60;
			break;
	
		case 9:
			num = 60;
			break;
	
		case 6:
			num = 40;
			break;
	
		case 14:
			num = 40;
			break;
	}

	return num;
}

void func_298(int iParam0, int iParam1) // Position - 0xDFF3
{
	if (iParam0 == -1)
		iParam0 = func_197();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_288(iParam0))
	{
		func_308(iParam0, iParam1);
	
		if (!func_307(51))
		{
			func_304("RE_REWARD" /*Some Random Events will reward the player with stat boosts or money.*/, 1, 0, 4000, 10000, func_190(), 0, 138, 0);
			func_303(51);
		}
	
		if (func_175(iParam0))
			Global_113810.f_24998.f_2 = 3;
	
		if (func_302(iParam0, iParam1) != 322)
			func_299(func_302(iParam0, iParam1), uLocal_41, uLocal_41.f_1);
	
		Global_113798 = iParam1;
	
		if (Global_113796 == 0)
			if (Global_113799 == 1 || Global_113799 == 5 || Global_113799 == 11 || Global_113799 == 25)
				func_204(2);
			else if (Global_113799 == 26 || Global_113799 == 8 || Global_113799 == 17)
				func_204(7);
			else
				func_204(1);
	}

	return;
}

void func_299(int iParam0, var uParam1, var uParam2) // Position - 0xE0F7
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		_STAT_SET_PACKED_BOOL(891 + iParam0, true, -1);
	}

	flag = true;

	if (Global_113810.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113810.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113810.f_10197[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_113810.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113810.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_113810.f_10197[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_300();

	return;
}

void func_300() // Position - 0xE1DD
{
	int num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float value;
	int value2;

	num = 0;
	Global_113546 = 0;
	Global_113547 = 0;
	Global_113548 = 0;
	Global_113549 = 0;
	Global_113550 = 0;
	Global_113551 = 0;
	Global_113552 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_113810.f_10197.f_3853;
	Global_113810.f_10197.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_113810.f_10197[num /*12*/].f_5 == 1)
		{
			switch (Global_113810.f_10197[num /*12*/].f_6)
			{
				case 1:
					Global_113546 = Global_113546 + 1;
					num2 = num2 + Global_113810.f_10197[num /*12*/].f_4;
					break;
			
				case 3:
					Global_113547 = Global_113547 + 1;
					num3 = num3 + Global_113810.f_10197[num /*12*/].f_4;
					break;
			
				case 5:
					Global_113548 = Global_113548 + 1;
					num4 = num4 + Global_113810.f_10197[num /*12*/].f_4;
					break;
			
				case 7:
					Global_113549 = Global_113549 + 1;
					num5 = num5 + Global_113810.f_10197[num /*12*/].f_4;
					break;
			
				case 9:
					Global_113550 = Global_113550 + 1;
					num6 = num6 + (Global_113810.f_10197[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_113551 = Global_113551 + 1;
					num7 = num7 + Global_113810.f_10197[num /*12*/].f_4;
					break;
			
				case 13:
					Global_113552 = Global_113552 + 1;
					num8 = num8 + Global_113810.f_10197[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113529 > 0)
		if (Global_113546 == Global_113529)
			num2 = 55f;

	if (Global_113530 > 0)
		if (Global_113547 == Global_113530)
			num3 = 10f;

	if (Global_113531 > 0)
		if (Global_113548 == Global_113531)
			num4 = 0f;

	if (Global_113532 > 0)
		if (Global_113549 == Global_113532)
			num5 = 10f;

	if (Global_113533 > 0)
	{
		if (Global_113550 == Global_113533 || (Global_113533 * 10) / Global_113550 < 41 || Global_113550 > Global_113536 || Global_113550 == Global_113536)
		{
			if (!IS_BIT_SET(Global_113810.f_10197.f_3856, 14))
			{
				if (Global_113550 == Global_113533)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113533, 0);
					MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113534 > 0)
		if (Global_113551 == Global_113534)
			num7 = 15f;

	if (Global_113535 > 0)
		if (Global_113552 == Global_113535)
			num8 = 5f;

	Global_113810.f_10197.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113550 > Global_113536 || Global_113550 == Global_113536)
		value2 = Global_113536;
	else
		value2 = Global_113550;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113546, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113529, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113547, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113530, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113548, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113531, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113549, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113532, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113536, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_113552 + Global_113551, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_113535 + Global_113534, true);
	Global_113553 = (Global_113546 * 100) / Global_113529;
	Global_113555 = ((Global_113548 + Global_113547) * 100) / (Global_113531 + Global_113530);
	Global_113554 = ((Global_113549 + value2) * 100) / (Global_113532 + Global_113536);
	Global_113556 = ((Global_113551 + Global_113552) * 100) / (Global_113534 + Global_113535);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113810.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113553, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113554, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113555, true);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113810.f_10197.f_3853))
		func_94(13, SYSTEM::FLOOR(Global_113810.f_10197.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78689)
		{
			if (func_301() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113544 = 0;
			
				if (!Global_63485)
					func_201();
			}
		}
	}

	return;
}

int func_301() // Position - 0xE69B
{
	return Global_32283;
}

int func_302(int iParam0, int iParam1) // Position - 0xE6A6
{
	switch (iParam0)
	{
		case 0:
			return 250;
	
		case 1:
			return 226;
	
		case 2:
			return 243;
	
		case 3:
			return 256;
	
		case 4:
			return 259;
	
		case 5:
			if (iParam1 == 1)
				return 281;
		
			if (iParam1 == 2)
				return 282;
			break;
	
		case 6:
			return 265;
	
		case 7:
			return 218;
	
		case 9:
			if (iParam1 == 1)
				return 271;
		
			if (iParam1 == 2)
				return 272;
		
			if (iParam1 == 3)
				return 273;
		
			if (iParam1 == 4)
				return 274;
		
			if (iParam1 == 5)
				return 275;
		
			if (iParam1 == 6)
				return 276;
		
			if (iParam1 == 7)
				return 277;
		
			if (iParam1 == 8)
				return 278;
		
			if (iParam1 == 9)
				return 279;
		
			if (iParam1 == 10)
				return 280;
			break;
	
		case 10:
			return 219;
	
		case 11:
			if (iParam1 == 1)
				return 246;
		
			if (iParam1 == 2)
				return 247;
		
			if (iParam1 == 3)
				return 248;
		
			if (iParam1 == 4)
				return 249;
			break;
	
		case 12:
			return 254;
	
		case 13:
			if (iParam1 == 1)
				return 260;
		
			if (iParam1 == 2)
				return 261;
		
			if (iParam1 == 3)
				return 262;
		
			if (iParam1 == 4)
				return 264;
			break;
	
		case 14:
			return 283;
	
		case 15:
			if (iParam1 == 1)
				return 224;
		
			if (iParam1 == 2)
				return 225;
			break;
	
		case 16:
			return 252;
	
		case 17:
			if (iParam1 == 1)
				return 244;
		
			if (iParam1 == 2)
				return 245;
			break;
	
		case 18:
			return 253;
	
		case 19:
			return 215;
	
		case 20:
			return 216;
	
		case 21:
			return 251;
	
		case 22:
			if (iParam1 == 1)
				return 221;
		
			if (iParam1 == 2)
				return 222;
			break;
	
		case 23:
			if (iParam1 == 1)
				return 213;
		
			if (iParam1 == 2)
				return 214;
			break;
	
		case 24:
			return 242;
	
		case 25:
			if (iParam1 == 1)
				return 267;
		
			if (iParam1 == 2)
				return 268;
		
			if (iParam1 == 3)
				return 269;
			break;
	
		case 8:
			return 255;
	
		case 26:
			if (iParam1 == 1)
				return 227;
		
			if (iParam1 == 2)
				return 228;
			break;
	
		case 27:
			if (iParam1 == 1)
				return 257;
		
			if (iParam1 == 2)
				return 258;
			break;
	
		case 28:
			return 217;
	
		case 29:
			if (iParam1 == 1)
				return 229;
		
			if (iParam1 == 2)
				return 230;
		
			if (iParam1 == 3)
				return 231;
			break;
	
		case 30:
			return 285;
	
		case 31:
			return 318;
	
		case 32:
			return 319;
	
		case 33:
			return 320;
	}

	return 322;
}

void func_303(int iParam0) // Position - 0xEA1A
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_113810.f_20413.f_150[i], offset);

	return;
}

void func_304(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xEA5C
{
	func_305(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_305(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xEA7C
{
	int i;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_113810.f_20413.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_113810.f_20413[i /*16*/], sParam0))
			return;
	}

	if (Global_113810.f_20413.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_12 = iParam2;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10 = -1;
	
		Global_113810.f_20413.f_145 = Global_113810.f_20413.f_145 + 1;
		func_306();
	}

	return;
}

void func_306() // Position - 0xEC4E
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113810.f_20413.f_146[i] = 0;
	}

	for (i = 0; i < Global_113810.f_20413.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113810.f_20413[i /*16*/].f_11, 0))
			if (Global_113810.f_20413[i /*16*/].f_12 > Global_113810.f_20413.f_146[0])
				Global_113810.f_20413.f_146[0] = Global_113810.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113810.f_20413[i /*16*/].f_11, 1))
			if (Global_113810.f_20413[i /*16*/].f_12 > Global_113810.f_20413.f_146[1])
				Global_113810.f_20413.f_146[1] = Global_113810.f_20413[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113810.f_20413[i /*16*/].f_11, 2))
			if (Global_113810.f_20413[i /*16*/].f_12 > Global_113810.f_20413.f_146[2])
				Global_113810.f_20413.f_146[2] = Global_113810.f_20413[i /*16*/].f_12;
	}

	return;
}

BOOL func_307(int iParam0) // Position - 0xED65
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_113810.f_20413.f_150[i], num);

	return false;
}

void func_308(int iParam0, int iParam1) // Position - 0xEDA5
{
	MISC::SET_BIT(&Global_113810.f_24998.f_8[iParam0], iParam1);
	return;
}

