/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpB"
 * 	found in "../J2735_201603DA.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -S/home/gmb/TMX-OAM/Build/asn1c/skeletons`
 */

#include "LongitudeDMS2.h"

asn_TYPE_member_t asn_MBR_LongitudeDMS2_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LongitudeDMS2, d),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DegreesLong,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"d"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LongitudeDMS2, m),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinutesAngle,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"m"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LongitudeDMS2, s),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecondsAngle,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"s"
		},
};
static const ber_tlv_tag_t asn_DEF_LongitudeDMS2_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LongitudeDMS2_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* d */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* m */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* s */
};
asn_SEQUENCE_specifics_t asn_SPC_LongitudeDMS2_specs_1 = {
	sizeof(struct LongitudeDMS2),
	offsetof(struct LongitudeDMS2, _asn_ctx),
	asn_MAP_LongitudeDMS2_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LongitudeDMS2 = {
	"LongitudeDMS2",
	"LongitudeDMS2",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_LongitudeDMS2_tags_1,
	sizeof(asn_DEF_LongitudeDMS2_tags_1)
		/sizeof(asn_DEF_LongitudeDMS2_tags_1[0]), /* 1 */
	asn_DEF_LongitudeDMS2_tags_1,	/* Same as above */
	sizeof(asn_DEF_LongitudeDMS2_tags_1)
		/sizeof(asn_DEF_LongitudeDMS2_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_LongitudeDMS2_1,
	3,	/* Elements count */
	&asn_SPC_LongitudeDMS2_specs_1	/* Additional specs */
};
