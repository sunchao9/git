		DIFF_OPT_SET(options, SUBMODULE_LOG);
		DIFF_OPT_CLR(options, SUBMODULE_LOG);
	int *found_changesp;
	ecbdata.found_changesp = &o->found_changes;
		fprintf(ecbdata->opt->file, "%s", ecbdata->header->buf);
	*(ecbdata->found_changesp) = 1;
		fprintf(ecbdata->opt->file, "%s%s--- %s%s%s\n",
		fprintf(ecbdata->opt->file, "%s%s+++ %s%s%s\n",
			putc('\n', ecbdata->opt->file);
		return;
	}

	if (len < 1) {
		emit_line(ecbdata->opt, reset, reset, line, len);
		if (ecbdata->diff_words
		    && ecbdata->diff_words->type == DIFF_WORDS_PORCELAIN)
			fputs("~\n", ecbdata->opt->file);
			emit_line(ecbdata->opt, context, reset, line, len);
			fputs("~\n", ecbdata->opt->file);
			emit_line(ecbdata->opt, context, reset, line, len);
		emit_line(ecbdata->opt,
			  diff_get_color(ecbdata->color_diff, DIFF_CONTEXT),
		width = term_columns() - options->output_prefix_length;
	if (DIFF_OPT_TST(o, SUBMODULE_LOG) &&
			(!one->mode || S_ISGITLINK(one->mode)) &&
			(!two->mode || S_ISGITLINK(two->mode))) {
				one->oid.hash, two->oid.hash,
	diff_set_mnemonic_prefix(o, "a/", "b/");
	if (DIFF_OPT_TST(o, REVERSE_DIFF)) {
		a_prefix = o->b_prefix;
		b_prefix = o->a_prefix;
	} else {
		a_prefix = o->a_prefix;
		b_prefix = o->b_prefix;
	}

		ecbdata.found_changesp = &o->found_changes;
		DIFF_OPT_SET(options, SUBMODULE_LOG);