//
// Adaptive Vision Library 4.10.0.61766
// This file is a part of Adaptive Vision Library, version 4.10
// Copyright (C) 2018 Future Processing Sp. z o. o.
//
// This file should not be included directly in your program.
// Please, include the main header file of the library instead.
//

#ifndef _REGIONFEATURE_H__
#define _REGIONFEATURE_H__

namespace avl
{
	namespace RegionFeature
	{
		enum Type
		{
			Area,
			BoundingBoxBottom,
			BoundingBoxHeight,
			BoundingBoxLeft,
			BoundingBoxRight,
			BoundingBoxTop,
			BoundingBoxWidth,
			Circularity_BoundingCirclePreserving,
			Circularity_PerimeterPreserving,
			Circularity_RadiusPreserving,
			Convexity,
			DiameterLength,
			Elongation,
			MassCenterX,
			MassCenterY,
			MajorAxisLength,
			MinorAxisLength,
			NumberOfHoles_EightDirections,
			NumberOfHoles_FourDirections,
			PerimeterLength,
			Rectangularity
		};
	}
}

#endif