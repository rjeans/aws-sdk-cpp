﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/BoundingBox.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Type that describes the face Amazon Rekognition chose to compare with the
   * faces in the target. This contains a bounding box for the selected face and
   * confidence level that the bounding box contains a face. Note that Amazon
   * Rekognition selects the largest face in the source image for this comparison.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ComparedSourceImageFace">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API ComparedSourceImageFace
  {
  public:
    ComparedSourceImageFace();
    ComparedSourceImageFace(const Aws::Utils::Json::JsonValue& jsonValue);
    ComparedSourceImageFace& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }

    
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }

    
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }

    
    inline ComparedSourceImageFace& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}

    
    inline ComparedSourceImageFace& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(value); return *this;}

    /**
     * <p>Confidence that the selected bounding box contains a face.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Confidence that the selected bounding box contains a face.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Confidence that the selected bounding box contains a face.</p>
     */
    inline ComparedSourceImageFace& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:
    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet;
    double m_confidence;
    bool m_confidenceHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
