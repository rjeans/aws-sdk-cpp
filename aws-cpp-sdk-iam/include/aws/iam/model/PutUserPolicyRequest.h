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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API PutUserPolicyRequest : public IAMRequest
  {
  public:
    PutUserPolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the user to associate the policy with.</p> <p>This parameter
     * allows (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the user to associate the policy with.</p> <p>This parameter
     * allows (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user to associate the policy with.</p> <p>This parameter
     * allows (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user to associate the policy with.</p> <p>This parameter
     * allows (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the user to associate the policy with.</p> <p>This parameter
     * allows (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline PutUserPolicyRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user to associate the policy with.</p> <p>This parameter
     * allows (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline PutUserPolicyRequest& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user to associate the policy with.</p> <p>This parameter
     * allows (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline PutUserPolicyRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the policy document.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy document.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy document.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy document.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy document.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline PutUserPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy document.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline PutUserPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy document.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-</p>
     */
    inline PutUserPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>The policy document.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of any printable ASCII character ranging from the space character
     * (\u0020) through end of the ASCII character range (\u00FF). It also includes the
     * special characters tab (\u0009), line feed (\u000A), and carriage return
     * (\u000D).</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The policy document.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of any printable ASCII character ranging from the space character
     * (\u0020) through end of the ASCII character range (\u00FF). It also includes the
     * special characters tab (\u0009), line feed (\u000A), and carriage return
     * (\u000D).</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The policy document.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of any printable ASCII character ranging from the space character
     * (\u0020) through end of the ASCII character range (\u00FF). It also includes the
     * special characters tab (\u0009), line feed (\u000A), and carriage return
     * (\u000D).</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The policy document.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of any printable ASCII character ranging from the space character
     * (\u0020) through end of the ASCII character range (\u00FF). It also includes the
     * special characters tab (\u0009), line feed (\u000A), and carriage return
     * (\u000D).</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The policy document.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of any printable ASCII character ranging from the space character
     * (\u0020) through end of the ASCII character range (\u00FF). It also includes the
     * special characters tab (\u0009), line feed (\u000A), and carriage return
     * (\u000D).</p>
     */
    inline PutUserPolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The policy document.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of any printable ASCII character ranging from the space character
     * (\u0020) through end of the ASCII character range (\u00FF). It also includes the
     * special characters tab (\u0009), line feed (\u000A), and carriage return
     * (\u000D).</p>
     */
    inline PutUserPolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The policy document.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of any printable ASCII character ranging from the space character
     * (\u0020) through end of the ASCII character range (\u00FF). It also includes the
     * special characters tab (\u0009), line feed (\u000A), and carriage return
     * (\u000D).</p>
     */
    inline PutUserPolicyRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
